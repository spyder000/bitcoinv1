// Copyright (c) 2011-2013 The BitcoinV1 developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "bitcoinv1units.h"

#include <QStringList>

BitcoinV1Units::BitcoinV1Units(QObject *parent):
        QAbstractListModel(parent),
        unitlist(availableUnits())
{
}

QList<BitcoinV1Units::Unit> BitcoinV1Units::availableUnits()
{
    QList<BitcoinV1Units::Unit> unitlist;
    unitlist.append(BTC1);
    unitlist.append(mBTC1);
    unitlist.append(uBTC1);
    return unitlist;
}

bool BitcoinV1Units::valid(int unit)
{
    switch(unit)
    {
    case BTC1:
    case mBTC1:
    case uBTC1:
        return true;
    default:
        return false;
    }
}

QString BitcoinV1Units::name(int unit)
{
    switch(unit)
    {
    case BTC1: return QString("BTC1");
    case mBTC1: return QString("mBTC1");
    case uBTC1: return QString::fromUtf8("μBTC1");
    default: return QString("???");
    }
}

QString BitcoinV1Units::description(int unit)
{
    switch(unit)
    {
    case BTC1: return QString("BitcoinV1s");
    case mBTC1: return QString("Milli-BitcoinV1s (1 / 1,000)");
    case uBTC1: return QString("Micro-BitcoinV1s (1 / 1,000,000)");
    default: return QString("???");
    }
}

qint64 BitcoinV1Units::factor(int unit)
{
    switch(unit)
    {
    case BTC1:  return 100000000;
    case mBTC1: return 100000;
    case uBTC1: return 100;
    default:   return 100000000;
    }
}

qint64 BitcoinV1Units::maxAmount(int unit)
{
    switch(unit)
    {
    case BTC1:  return Q_INT64_C(21000000);
    case mBTC1: return Q_INT64_C(21000000000);
    case uBTC1: return Q_INT64_C(21000000000000);
    default:   return 0;
    }
}

int BitcoinV1Units::amountDigits(int unit)
{
    switch(unit)
    {
    case BTC1: return 8; // 21,000,000 (# digits, without commas)
    case mBTC1: return 11; // 21,000,000,000
    case uBTC1: return 14; // 21,000,000,000,000
    default: return 0;
    }
}

int BitcoinV1Units::decimals(int unit)
{
    switch(unit)
    {
    case BTC1: return 8;
    case mBTC1: return 5;
    case uBTC1: return 2;
    default: return 0;
    }
}

QString BitcoinV1Units::format(int unit, qint64 n, bool fPlus)
{
    // Note: not using straight sprintf here because we do NOT want
    // localized number formatting.
    if(!valid(unit))
        return QString(); // Refuse to format invalid unit
    qint64 coin = factor(unit);
    int num_decimals = decimals(unit);
    qint64 n_abs = (n > 0 ? n : -n);
    qint64 quotient = n_abs / coin;
    qint64 remainder = n_abs % coin;
    QString quotient_str = QString::number(quotient);
    QString remainder_str = QString::number(remainder).rightJustified(num_decimals, '0');

    // Right-trim excess zeros after the decimal point
    int nTrim = 0;
    for (int i = remainder_str.size()-1; i>=2 && (remainder_str.at(i) == '0'); --i)
        ++nTrim;
    remainder_str.chop(nTrim);

    if (n < 0)
        quotient_str.insert(0, '-');
    else if (fPlus && n > 0)
        quotient_str.insert(0, '+');
    return quotient_str + QString(".") + remainder_str;
}

QString BitcoinV1Units::formatWithUnit(int unit, qint64 amount, bool plussign)
{
    return format(unit, amount, plussign) + QString(" ") + name(unit);
}

bool BitcoinV1Units::parse(int unit, const QString &value, qint64 *val_out)
{
    if(!valid(unit) || value.isEmpty())
        return false; // Refuse to parse invalid unit or empty string
    int num_decimals = decimals(unit);
    QStringList parts = value.split(".");

    if(parts.size() > 2)
    {
        return false; // More than one dot
    }
    QString whole = parts[0];
    QString decimals;

    if(parts.size() > 1)
    {
        decimals = parts[1];
    }
    if(decimals.size() > num_decimals)
    {
        return false; // Exceeds max precision
    }
    bool ok = false;
    QString str = whole + decimals.leftJustified(num_decimals, '0');

    if(str.size() > 18)
    {
        return false; // Longer numbers will exceed 63 bits
    }
    qint64 retvalue = str.toLongLong(&ok);
    if(val_out)
    {
        *val_out = retvalue;
    }
    return ok;
}

int BitcoinV1Units::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return unitlist.size();
}

QVariant BitcoinV1Units::data(const QModelIndex &index, int role) const
{
    int row = index.row();
    if(row >= 0 && row < unitlist.size())
    {
        Unit unit = unitlist.at(row);
        switch(role)
        {
        case Qt::EditRole:
        case Qt::DisplayRole:
            return QVariant(name(unit));
        case Qt::ToolTipRole:
            return QVariant(description(unit));
        case UnitRole:
            return QVariant(static_cast<int>(unit));
        }
    }
    return QVariant();
}
