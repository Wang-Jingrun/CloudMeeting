/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mytextedit.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *joinmeetBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *joinmeet_label;
    QLineEdit *meetno;
    QPushButton *joinmeetBtn;
    QGroupBox *createmeetBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *createmeetBtn;
    QGroupBox *exitmeetBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *exitmeetBtn;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *ip;
    QLabel *label_2;
    QLineEdit *port;
    QPushButton *connServer;
    QHBoxLayout *horizontalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_6;
    QListWidget *listWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_7;
    MyTextEdit *plainTextEdit;
    QPushButton *sendmsg;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *mainshow_label;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *openVedio;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *openAudio;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *outlog;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setEnabled(true);
        Widget->resize(1296, 784);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(900, 600));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(9);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 6, 5, 3);
        joinmeetBox = new QGroupBox(Widget);
        joinmeetBox->setObjectName(QString::fromUtf8("joinmeetBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(joinmeetBox->sizePolicy().hasHeightForWidth());
        joinmeetBox->setSizePolicy(sizePolicy1);
        joinmeetBox->setCursor(QCursor(Qt::ArrowCursor));
        horizontalLayout_2 = new QHBoxLayout(joinmeetBox);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(3, 3, 3, 3);
        joinmeet_label = new QLabel(joinmeetBox);
        joinmeet_label->setObjectName(QString::fromUtf8("joinmeet_label"));

        horizontalLayout_2->addWidget(joinmeet_label);

        meetno = new QLineEdit(joinmeetBox);
        meetno->setObjectName(QString::fromUtf8("meetno"));

        horizontalLayout_2->addWidget(meetno);

        joinmeetBtn = new QPushButton(joinmeetBox);
        joinmeetBtn->setObjectName(QString::fromUtf8("joinmeetBtn"));
        joinmeetBtn->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_2->addWidget(joinmeetBtn);


        horizontalLayout->addWidget(joinmeetBox);

        createmeetBox = new QGroupBox(Widget);
        createmeetBox->setObjectName(QString::fromUtf8("createmeetBox"));
        sizePolicy1.setHeightForWidth(createmeetBox->sizePolicy().hasHeightForWidth());
        createmeetBox->setSizePolicy(sizePolicy1);
        createmeetBox->setCursor(QCursor(Qt::ArrowCursor));
        horizontalLayout_3 = new QHBoxLayout(createmeetBox);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(3, 3, 3, 3);
        createmeetBtn = new QPushButton(createmeetBox);
        createmeetBtn->setObjectName(QString::fromUtf8("createmeetBtn"));
        createmeetBtn->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_3->addWidget(createmeetBtn);


        horizontalLayout->addWidget(createmeetBox);

        exitmeetBox = new QGroupBox(Widget);
        exitmeetBox->setObjectName(QString::fromUtf8("exitmeetBox"));
        sizePolicy1.setHeightForWidth(exitmeetBox->sizePolicy().hasHeightForWidth());
        exitmeetBox->setSizePolicy(sizePolicy1);
        exitmeetBox->setCursor(QCursor(Qt::ArrowCursor));
        horizontalLayout_4 = new QHBoxLayout(exitmeetBox);
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(3, 3, 3, 3);
        exitmeetBtn = new QPushButton(exitmeetBox);
        exitmeetBtn->setObjectName(QString::fromUtf8("exitmeetBtn"));
        exitmeetBtn->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_4->addWidget(exitmeetBtn);


        horizontalLayout->addWidget(exitmeetBox);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_4);
        horizontalLayout_7->setSpacing(3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(3, 3, 3, 3);
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        ip = new QLineEdit(groupBox_4);
        ip->setObjectName(QString::fromUtf8("ip"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ip->sizePolicy().hasHeightForWidth());
        ip->setSizePolicy(sizePolicy2);
        ip->setMinimumSize(QSize(0, 0));

        horizontalLayout_7->addWidget(ip);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        port = new QLineEdit(groupBox_4);
        port->setObjectName(QString::fromUtf8("port"));
        sizePolicy2.setHeightForWidth(port->sizePolicy().hasHeightForWidth());
        port->setSizePolicy(sizePolicy2);
        port->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_7->addWidget(port);

        connServer = new QPushButton(groupBox_4);
        connServer->setObjectName(QString::fromUtf8("connServer"));

        horizontalLayout_7->addWidget(connServer);


        horizontalLayout->addWidget(groupBox_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
        tabWidget->setMinimumSize(QSize(400, 0));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(255, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        tabWidget->setPalette(palette);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(true);
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_5 = new QVBoxLayout(tab_5);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(tab_5);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 392, 585));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy4);
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        sizePolicy4.setHeightForWidth(tab_6->sizePolicy().hasHeightForWidth());
        tab_6->setSizePolicy(sizePolicy4);
        verticalLayout_6 = new QVBoxLayout(tab_6);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(tab_6);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listWidget->setAutoScrollMargin(0);
        listWidget->setItemAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignRight|Qt::AlignTrailing);

        verticalLayout_6->addWidget(listWidget);

        widget = new QWidget(tab_6);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy5);
        widget->setMaximumSize(QSize(16777215, 100));
        verticalLayout_7 = new QVBoxLayout(widget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new MyTextEdit(widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        sizePolicy3.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy3);
        plainTextEdit->setMaximumSize(QSize(16777215, 80));
        QPalette palette1;
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush4);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        plainTextEdit->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(12);
        plainTextEdit->setFont(font);
        plainTextEdit->setPlaceholderText(QString::fromUtf8("\350\276\223\345\205\245@\345\217\257\344\273\245\345\220\221\345\257\271\345\272\224\347\232\204IP\345\217\221\351\200\201\346\225\260\346\215\256"));

        verticalLayout_7->addWidget(plainTextEdit);

        sendmsg = new QPushButton(widget);
        sendmsg->setObjectName(QString::fromUtf8("sendmsg"));

        verticalLayout_7->addWidget(sendmsg);


        verticalLayout_6->addWidget(widget);

        tabWidget->addTab(tab_6, QString());

        horizontalLayout_5->addWidget(tabWidget);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy4.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy4);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        groupBox_2->setPalette(palette2);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainshow_label = new QLabel(groupBox_2);
        mainshow_label->setObjectName(QString::fromUtf8("mainshow_label"));
        sizePolicy4.setHeightForWidth(mainshow_label->sizePolicy().hasHeightForWidth());
        mainshow_label->setSizePolicy(sizePolicy4);
        mainshow_label->setOpenExternalLinks(false);

        gridLayout->addWidget(mainshow_label, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        groupBox_5 = new QGroupBox(Widget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy6);
        horizontalLayout_9 = new QHBoxLayout(groupBox_5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        openVedio = new QPushButton(groupBox_5);
        openVedio->setObjectName(QString::fromUtf8("openVedio"));

        horizontalLayout_9->addWidget(openVedio);


        horizontalLayout_6->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(Widget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        openAudio = new QPushButton(groupBox_6);
        openAudio->setObjectName(QString::fromUtf8("openAudio"));
        sizePolicy1.setHeightForWidth(openAudio->sizePolicy().hasHeightForWidth());
        openAudio->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(openAudio);

        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        horizontalSlider = new QSlider(groupBox_6);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider);


        horizontalLayout_6->addWidget(groupBox_6);


        verticalLayout->addLayout(horizontalLayout_6);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        outlog = new QLabel(groupBox_3);
        outlog->setObjectName(QString::fromUtf8("outlog"));
        sizePolicy6.setHeightForWidth(outlog->sizePolicy().hasHeightForWidth());
        outlog->setSizePolicy(sizePolicy6);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        outlog->setPalette(palette3);

        verticalLayout_2->addWidget(outlog);


        verticalLayout->addWidget(groupBox_3);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\344\272\221\344\274\232\350\256\256", nullptr));
        joinmeetBox->setTitle(QApplication::translate("Widget", "\345\212\240\345\205\245\344\274\232\350\256\256", nullptr));
        joinmeet_label->setText(QApplication::translate("Widget", "\344\274\232\350\256\256\347\274\226\345\217\267:", nullptr));
        joinmeetBtn->setText(QApplication::translate("Widget", "\345\212\240\345\205\245", nullptr));
        createmeetBox->setTitle(QApplication::translate("Widget", "\345\210\233\345\273\272\344\274\232\350\256\256", nullptr));
        createmeetBtn->setText(QApplication::translate("Widget", "\345\210\233\345\273\272", nullptr));
        exitmeetBox->setTitle(QApplication::translate("Widget", "\351\200\200\345\207\272\344\274\232\350\256\256", nullptr));
        exitmeetBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        groupBox_4->setTitle(QApplication::translate("Widget", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        label->setText(QApplication::translate("Widget", "IP:", nullptr));
        ip->setText(QApplication::translate("Widget", "192.168.1.126", nullptr));
        label_2->setText(QApplication::translate("Widget", "Port:", nullptr));
        port->setText(QApplication::translate("Widget", "8888", nullptr));
        connServer->setText(QApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Widget", "\345\211\257\345\261\217\345\271\225", nullptr));
        sendmsg->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Widget", "\350\201\212\345\244\251\347\252\227\345\217\243", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\344\270\273\345\261\217\345\271\225", nullptr));
        mainshow_label->setText(QString());
        groupBox_5->setTitle(QApplication::translate("Widget", "\350\247\206\351\242\221", nullptr));
        openVedio->setText(QApplication::translate("Widget", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", nullptr));
        groupBox_6->setTitle(QApplication::translate("Widget", "\351\237\263\351\242\221", nullptr));
        openAudio->setText(QApplication::translate("Widget", "\345\274\200\345\220\257\351\237\263\351\242\221", nullptr));
        label_3->setText(QApplication::translate("Widget", "\351\237\263\351\207\217:", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "\350\276\223\345\207\272\346\227\245\345\277\227", nullptr));
        outlog->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
