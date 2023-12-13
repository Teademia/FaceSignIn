/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QFrame *Right;
    QWidget *CaemraI;
    QTextEdit *textEdit;
    QFrame *Left;
    QPushButton *Open;
    QPushButton *Sign;
    QPushButton *Check;
    QPushButton *Back;

    void setupUi(QWidget *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->resize(1280, 720);
        SignIn->setStyleSheet(QString::fromUtf8("#SignIn\n"
"{\n"
"	background-image: url(:/res/pic/background.jpg);\n"
"}"));
        Right = new QFrame(SignIn);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(700, 50, 500, 600));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Right->sizePolicy().hasHeightForWidth());
        Right->setSizePolicy(sizePolicy);
        Right->setMinimumSize(QSize(500, 600));
        Right->setStyleSheet(QString::fromUtf8("background-image: url(:/res/pic/room,.png);"));
        Right->setFrameShape(QFrame::StyledPanel);
        Right->setFrameShadow(QFrame::Raised);
        CaemraI = new QWidget(Right);
        CaemraI->setObjectName(QString::fromUtf8("CaemraI"));
        CaemraI->setGeometry(QRect(10, 10, 471, 61));
        CaemraI->setStyleSheet(QString::fromUtf8("background-image: url(:/res/pic/background.jpg);"));
        textEdit = new QTextEdit(CaemraI);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 481, 131));
        Left = new QFrame(SignIn);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(110, 50, 581, 601));
        sizePolicy.setHeightForWidth(Left->sizePolicy().hasHeightForWidth());
        Left->setSizePolicy(sizePolicy);
        Left->setMinimumSize(QSize(500, 600));
        Left->setStyleSheet(QString::fromUtf8("#Left\n"
"{\n"
"	\n"
"	background-image: url(:/res/pic/b.jpg);\n"
"}"));
        Left->setFrameShape(QFrame::StyledPanel);
        Left->setFrameShadow(QFrame::Raised);
        Open = new QPushButton(Left);
        Open->setObjectName(QString::fromUtf8("Open"));
        Open->setGeometry(QRect(70, 70, 461, 91));
        Open->setStyleSheet(QString::fromUtf8("\n"
"\n"
"#Open\n"
"{\n"
"	font: 700 20pt \"Palatino Linotype\";\n"
"	border-radius:15px;\n"
"    background-color: rgb(255, 255, 0);\n"
"    color: rgb(85, 0, 127);\n"
"    font: 20pt \"Microsoft YaHei UI\";\n"
"}"));
        Sign = new QPushButton(Left);
        Sign->setObjectName(QString::fromUtf8("Sign"));
        Sign->setGeometry(QRect(70, 240, 461, 101));
        Sign->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(85, 0, 127);\n"
"font: 700 20pt \"Palatino Linotype\";\n"
"font: 20pt \"Microsoft YaHei UI\";border-radius:15px;"));
        Check = new QPushButton(Left);
        Check->setObjectName(QString::fromUtf8("Check"));
        Check->setGeometry(QRect(70, 360, 461, 91));
        Check->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 700 20pt \"Palatino Linotype\";\n"
"color: rgb(85, 0, 127);\n"
"border-radius:15px;"));
        Back = new QPushButton(Left);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(70, 470, 461, 91));
        Back->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 700 20pt \"Palatino Linotype\";\n"
"color: rgb(85, 0, 127);\n"
"border-radius:15px;"));

        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QWidget *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Form", nullptr));
        textEdit->setHtml(QCoreApplication::translate("SignIn", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; color:#ffff00;\">Camera</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:26pt; color:#ffff00;\"><br /></p></body></html>", nullptr));
        Open->setText(QCoreApplication::translate("SignIn", "\346\211\223\345\274\200\347\233\270\346\234\272", nullptr));
        Sign->setText(QCoreApplication::translate("SignIn", "\346\213\215\347\205\247\345\271\266\347\255\276\345\210\260", nullptr));
        Check->setText(QCoreApplication::translate("SignIn", "\346\237\245\347\234\213\347\255\276\345\210\260\346\203\205\345\206\265", nullptr));
        Back->setText(QCoreApplication::translate("SignIn", "\345\233\236\345\210\260\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
