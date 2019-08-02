include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = bitcoinv1-qt
noinst_LIBRARIES = libbitcoinv1qt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# bitcoinv1 qt core #
QT_TS = \
  locale/bitcoinv1_ach.ts \
  locale/bitcoinv1_af_ZA.ts \
  locale/bitcoinv1_ar.ts \
  locale/bitcoinv1_be_BY.ts \
  locale/bitcoinv1_bg.ts \
  locale/bitcoinv1_bs.ts \
  locale/bitcoinv1_ca_ES.ts \
  locale/bitcoinv1_ca.ts \
  locale/bitcoinv1_ca@valencia.ts \
  locale/bitcoinv1_cmn.ts \
  locale/bitcoinv1_cs.ts \
  locale/bitcoinv1_cy.ts \
  locale/bitcoinv1_da.ts \
  locale/bitcoinv1_de.ts \
  locale/bitcoinv1_el_GR.ts \
  locale/bitcoinv1_en.ts \
  locale/bitcoinv1_eo.ts \
  locale/bitcoinv1_es_CL.ts \
  locale/bitcoinv1_es_DO.ts \
  locale/bitcoinv1_es_MX.ts \
  locale/bitcoinv1_es.ts \
  locale/bitcoinv1_es_UY.ts \
  locale/bitcoinv1_et.ts \
  locale/bitcoinv1_eu_ES.ts \
  locale/bitcoinv1_fa_IR.ts \
  locale/bitcoinv1_fa.ts \
  locale/bitcoinv1_fi.ts \
  locale/bitcoinv1_fr_CA.ts \
  locale/bitcoinv1_fr.ts \
  locale/bitcoinv1_gl.ts \
  locale/bitcoinv1_gu_IN.ts \
  locale/bitcoinv1_he.ts \
  locale/bitcoinv1_hi_IN.ts \
  locale/bitcoinv1_hr.ts \
  locale/bitcoinv1_hu.ts \
  locale/bitcoinv1_id_ID.ts \
  locale/bitcoinv1_it.ts \
  locale/bitcoinv1_ja.ts \
  locale/bitcoinv1_ka.ts \
  locale/bitcoinv1_kk_KZ.ts \
  locale/bitcoinv1_ko_KR.ts \
  locale/bitcoinv1_ky.ts \
  locale/bitcoinv1_la.ts \
  locale/bitcoinv1_lt.ts \
  locale/bitcoinv1_lv_LV.ts \
  locale/bitcoinv1_mn.ts \
  locale/bitcoinv1_ms_MY.ts \
  locale/bitcoinv1_nb.ts \
  locale/bitcoinv1_nl.ts \
  locale/bitcoinv1_pam.ts \
  locale/bitcoinv1_pl.ts \
  locale/bitcoinv1_pt_BR.ts \
  locale/bitcoinv1_pt_PT.ts \
  locale/bitcoinv1_ro_RO.ts \
  locale/bitcoinv1_ru.ts \
  locale/bitcoinv1_sah.ts \
  locale/bitcoinv1_sk.ts \
  locale/bitcoinv1_sl_SI.ts \
  locale/bitcoinv1_sq.ts \
  locale/bitcoinv1_sr.ts \
  locale/bitcoinv1_sv.ts \
  locale/bitcoinv1_th_TH.ts \
  locale/bitcoinv1_tr.ts \
  locale/bitcoinv1_uk.ts \
  locale/bitcoinv1_ur_PK.ts \
  locale/bitcoinv1_uz@Cyrl.ts \
  locale/bitcoinv1_vi.ts \
  locale/bitcoinv1_vi_VN.ts \
  locale/bitcoinv1_zh_CN.ts \
  locale/bitcoinv1_zh_HK.ts \
  locale/bitcoinv1_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_bitcoinv1addressvalidator.cpp \
  moc_bitcoinv1amountfield.cpp \
  moc_bitcoinv1gui.cpp \
  moc_bitcoinv1units.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

BITCOINV1_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  bitcoinv1.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_bitcoinv1.cpp
QT_QRC = bitcoinv1.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

BITCOINV1_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  bitcoinv1addressvalidator.h \
  bitcoinv1amountfield.h \
  bitcoinv1gui.h \
  bitcoinv1units.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h \
  winshutdownmonitor.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/bitcoinv1.ico \
  res/icons/bitcoinv1.png \
  res/icons/bitcoinv1_testnet.ico \
  res/icons/bitcoinv1_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

BITCOINV1_QT_CPP = \
  bitcoinv1.cpp \
  bitcoinv1addressvalidator.cpp \
  bitcoinv1amountfield.cpp \
  bitcoinv1gui.cpp \
  bitcoinv1units.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp \
  winshutdownmonitor.cpp

if ENABLE_WALLET
BITCOINV1_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

BITCOINV1_RC = res/bitcoinv1-qt-res.rc

libbitcoinv1qt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libbitcoinv1qt_a_SOURCES = $(BITCOINV1_QT_CPP) $(BITCOINV1_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libbitcoinv1qt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libbitcoinv1qt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# bitcoinv1-qt binary #
bitcoinv1_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
bitcoinv1_qt_SOURCES = bitcoinv1.cpp
if TARGET_DARWIN
  bitcoinv1_qt_SOURCES += $(BITCOINV1_MM)
endif
if TARGET_WINDOWS
  bitcoinv1_qt_SOURCES += $(BITCOINV1_RC)
endif
bitcoinv1_qt_LDADD = libbitcoinv1qt.a $(LIBBITCOINV1_SERVER)
if ENABLE_WALLET
bitcoinv1_qt_LDADD += $(LIBBITCOINV1_WALLET)
endif
bitcoinv1_qt_LDADD += $(LIBBITCOINV1_CLI) $(LIBBITCOINV1_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
bitcoinv1_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

bitcoinv1strings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/bitcoinv1strings.cpp

translate: bitcoinv1strings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(BITCOINV1_QT_CPP) $(BITCOINV1_QT_H) $(BITCOINV1_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/bitcoinv1_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name bitcoinv1 -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
