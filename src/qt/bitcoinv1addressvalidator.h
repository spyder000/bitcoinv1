// Copyright (c) 2011-2014 The BitcoinV1 developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINV1ADDRESSVALIDATOR_H
#define BITCOINV1ADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BitcoinV1AddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinV1AddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** BitcoinV1 address widget validator, checks for a valid bitcoinv1 address.
 */
class BitcoinV1AddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinV1AddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOINV1ADDRESSVALIDATOR_H
