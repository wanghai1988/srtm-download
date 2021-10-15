/********************************************************************************
** Form generated from reading UI file 'srtmdownload.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SRTMDOWNLOAD_H
#define UI_SRTMDOWNLOAD_H

#include <QGeoView/QGVMap.h>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_srtmdownloadClass
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpinBox *lne_north;
    QSpinBox *lne_east;
    QSpinBox *lne_west;
    QSpinBox *lne_south;
    QPushButton *btnSetExtentFromMap;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lne_SRTM_path;
    QPushButton *BtnBrowser;
    QProgressBar *overall_progressBar;
    QTableWidget *progressTableWidget;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *cBIsCombine;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnDownload;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QGVMap *geoMap;

    void setupUi(QDialog *srtmdownloadClass)
    {
        if (srtmdownloadClass->objectName().isEmpty())
            srtmdownloadClass->setObjectName(QString::fromUtf8("srtmdownloadClass"));
        srtmdownloadClass->resize(1400, 555);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/srtmdownload/srtmdownload.ico"), QSize(), QIcon::Normal, QIcon::Off);
        srtmdownloadClass->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(srtmdownloadClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lne_north = new QSpinBox(srtmdownloadClass);
        lne_north->setObjectName(QString::fromUtf8("lne_north"));
        lne_north->setMinimum(-90);
        lne_north->setMaximum(90);

        gridLayout->addWidget(lne_north, 0, 2, 1, 1);

        lne_east = new QSpinBox(srtmdownloadClass);
        lne_east->setObjectName(QString::fromUtf8("lne_east"));
        lne_east->setMinimum(-180);
        lne_east->setMaximum(180);

        gridLayout->addWidget(lne_east, 1, 3, 1, 1);

        lne_west = new QSpinBox(srtmdownloadClass);
        lne_west->setObjectName(QString::fromUtf8("lne_west"));
        lne_west->setMinimum(-180);
        lne_west->setMaximum(180);

        gridLayout->addWidget(lne_west, 1, 1, 1, 1);

        lne_south = new QSpinBox(srtmdownloadClass);
        lne_south->setObjectName(QString::fromUtf8("lne_south"));
        lne_south->setMinimum(-90);
        lne_south->setMaximum(90);

        gridLayout->addWidget(lne_south, 2, 2, 1, 1);

        btnSetExtentFromMap = new QPushButton(srtmdownloadClass);
        btnSetExtentFromMap->setObjectName(QString::fromUtf8("btnSetExtentFromMap"));

        gridLayout->addWidget(btnSetExtentFromMap, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(srtmdownloadClass);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        lne_SRTM_path = new QLineEdit(srtmdownloadClass);
        lne_SRTM_path->setObjectName(QString::fromUtf8("lne_SRTM_path"));

        horizontalLayout_4->addWidget(lne_SRTM_path);

        BtnBrowser = new QPushButton(srtmdownloadClass);
        BtnBrowser->setObjectName(QString::fromUtf8("BtnBrowser"));

        horizontalLayout_4->addWidget(BtnBrowser);


        verticalLayout->addLayout(horizontalLayout_4);

        overall_progressBar = new QProgressBar(srtmdownloadClass);
        overall_progressBar->setObjectName(QString::fromUtf8("overall_progressBar"));
        overall_progressBar->setValue(0);
        overall_progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(overall_progressBar);

        progressTableWidget = new QTableWidget(srtmdownloadClass);
        if (progressTableWidget->columnCount() < 2)
            progressTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        progressTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        progressTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        progressTableWidget->setObjectName(QString::fromUtf8("progressTableWidget"));
        progressTableWidget->setColumnCount(2);
        progressTableWidget->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(progressTableWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cBIsCombine = new QCheckBox(srtmdownloadClass);
        cBIsCombine->setObjectName(QString::fromUtf8("cBIsCombine"));
        cBIsCombine->setChecked(true);

        horizontalLayout_5->addWidget(cBIsCombine);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        BtnDownload = new QPushButton(srtmdownloadClass);
        BtnDownload->setObjectName(QString::fromUtf8("BtnDownload"));

        horizontalLayout_5->addWidget(BtnDownload);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout);

        frame = new QFrame(srtmdownloadClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        geoMap = new QGVMap(frame);
        geoMap->setObjectName(QString::fromUtf8("geoMap"));

        horizontalLayout_2->addWidget(geoMap);


        horizontalLayout->addWidget(frame);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 5);

        retranslateUi(srtmdownloadClass);

        QMetaObject::connectSlotsByName(srtmdownloadClass);
    } // setupUi

    void retranslateUi(QDialog *srtmdownloadClass)
    {
        srtmdownloadClass->setWindowTitle(QApplication::translate("srtmdownloadClass", "srtmdownload", nullptr));
        btnSetExtentFromMap->setText(QApplication::translate("srtmdownloadClass", "\350\256\276\347\275\256\345\234\260\345\233\276\350\214\203\345\233\264", nullptr));
        label->setText(QApplication::translate("srtmdownloadClass", "\350\276\223\345\207\272\347\233\256\345\275\225", nullptr));
        BtnBrowser->setText(QApplication::translate("srtmdownloadClass", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = progressTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("srtmdownloadClass", "\346\226\207\344\273\266\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = progressTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("srtmdownloadClass", "\350\277\233\345\272\246", nullptr));
        cBIsCombine->setText(QApplication::translate("srtmdownloadClass", "\346\230\257\345\220\246\345\220\210\345\271\266\345\275\261\345\203\217", nullptr));
        BtnDownload->setText(QApplication::translate("srtmdownloadClass", "\344\270\213\350\275\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class srtmdownloadClass: public Ui_srtmdownloadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SRTMDOWNLOAD_H
