/********************************************************************************
** Form generated from reading UI file 'Setting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QLabel *label;
    QComboBox *levelBox;
    QComboBox *channelNo;
    QLabel *label_2;
    QPushButton *ok;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *functionsNames;
    QComboBox *filesNames;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *threadNo;
    QComboBox *frameNo;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->resize(1000, 488);
        Setting->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(Setting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(8, 33, 131, 71));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        levelBox = new QComboBox(Setting);
        levelBox->addItem(QString());
        levelBox->addItem(QString());
        levelBox->addItem(QString());
        levelBox->addItem(QString());
        levelBox->setObjectName(QString::fromUtf8("levelBox"));
        levelBox->setGeometry(QRect(150, 30, 271, 71));
        channelNo = new QComboBox(Setting);
        channelNo->addItem(QString());
        channelNo->setObjectName(QString::fromUtf8("channelNo"));
        channelNo->setGeometry(QRect(680, 30, 171, 71));
        label_2 = new QLabel(Setting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(520, 30, 141, 71));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);
        ok = new QPushButton(Setting);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(844, 432, 141, 41));
        ok->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
""));
        label_3 = new QLabel(Setting);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 131, 71));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Setting);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(520, 140, 141, 71));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignCenter);
        functionsNames = new QComboBox(Setting);
        functionsNames->addItem(QString());
        functionsNames->setObjectName(QString::fromUtf8("functionsNames"));
        functionsNames->setGeometry(QRect(150, 150, 271, 71));
        filesNames = new QComboBox(Setting);
        filesNames->addItem(QString());
        filesNames->setObjectName(QString::fromUtf8("filesNames"));
        filesNames->setGeometry(QRect(680, 140, 171, 71));
        label_5 = new QLabel(Setting);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 260, 131, 71));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(Setting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(520, 260, 141, 71));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        label_6->setAlignment(Qt::AlignCenter);
        threadNo = new QComboBox(Setting);
        threadNo->addItem(QString());
        threadNo->setObjectName(QString::fromUtf8("threadNo"));
        threadNo->setGeometry(QRect(148, 261, 271, 71));
        frameNo = new QComboBox(Setting);
        frameNo->addItem(QString());
        frameNo->setObjectName(QString::fromUtf8("frameNo"));
        frameNo->setGeometry(QRect(680, 260, 171, 71));

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "Setting", nullptr));
        label->setText(QCoreApplication::translate("Setting", "LEVEL", nullptr));
        levelBox->setItemText(0, QCoreApplication::translate("Setting", "INFO", nullptr));
        levelBox->setItemText(1, QCoreApplication::translate("Setting", "WARN", nullptr));
        levelBox->setItemText(2, QCoreApplication::translate("Setting", "ERROR", nullptr));
        levelBox->setItemText(3, QCoreApplication::translate("Setting", "DEBUG", nullptr));

        channelNo->setItemText(0, QCoreApplication::translate("Setting", "All", nullptr));

        label_2->setText(QCoreApplication::translate("Setting", "CHANNEL", nullptr));
        ok->setText(QCoreApplication::translate("Setting", "OK", nullptr));
        label_3->setText(QCoreApplication::translate("Setting", "FUNCTION", nullptr));
        label_4->setText(QCoreApplication::translate("Setting", "FILE", nullptr));
        functionsNames->setItemText(0, QCoreApplication::translate("Setting", "All", nullptr));

        filesNames->setItemText(0, QCoreApplication::translate("Setting", "All", nullptr));

        label_5->setText(QCoreApplication::translate("Setting", "THREAD", nullptr));
        label_6->setText(QCoreApplication::translate("Setting", "FRAME", nullptr));
        threadNo->setItemText(0, QCoreApplication::translate("Setting", "All", nullptr));

        frameNo->setItemText(0, QCoreApplication::translate("Setting", "All", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
