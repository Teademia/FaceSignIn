/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_6;
    QFrame *frame_background;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_17;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame_login;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_login;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_20;
    QFrame *frame_user_name;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_user_name;
    QLineEdit *lineE_user_name;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame_pwd;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_pwd;
    QLineEdit *lineE_pwd;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *btn_forget;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btn_wx;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_qq;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_wb;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QFrame *frame_pic;
    QWidget *widget_2;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_10;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1600, 900);
        Widget->setMinimumSize(QSize(800, 450));
        Widget->setStyleSheet(QString::fromUtf8("/**\n"
"background-image: url(:/res/pic/b.jpg);\n"
"    \350\257\245\351\241\265\351\235\242\344\270\272\347\262\211\347\272\242\350\211\262\347\232\256\350\202\244\n"
"*/\n"
"\n"
"\n"
"/*\350\203\214\346\231\257*/\n"
"#frame_background{\n"
"background-image: url(:/res/pic/b.jpg);\n"
"}\n"
"\n"
"\n"
"/*\350\264\246\346\210\267\345\222\214\345\257\206\347\240\201\346\241\206*/\n"
"#frame_user_name,#frame_pwd{\n"
"    border: 1px solid #696969;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"    border: none;\n"
"}\n"
"\n"
"\n"
"/*\346\214\211\351\222\256-\345\277\230\350\256\260\345\257\206\347\240\201*/\n"
"#btn_forget{\n"
"    border:none;\n"
"    color:#e83737;\n"
"}\n"
"\n"
"/*\346\214\211\351\222\256-\345\277\230\350\256\260\345\257\206\347\240\201-\351\274\240\346\240\207\346\202\254\345\201\234*/\n"
"#btn_forget:hover{\n"
"    border:none;\n"
"    color:#e83737;\n"
"}\n"
"\n"
"/*\346\214\211\351\222\256-\347\231\273\345\275\225*/\n"
"#btn_login{\n"
"    color:#ffffff;\n"
"    border: none;\n"
""
                        "    background-color:#fd6c92;\n"
"    border-radius: 5px;\n"
"}\n"
"/*\346\214\211\351\222\256-\347\231\273\345\275\225-\351\274\240\346\240\207\346\202\254\345\201\234*/\n"
"#btn_login:hover{\n"
"    color:#ffffff;\n"
"    border: none;\n"
"    background-color:#fd4979;\n"
"    border-radius: 5px;\n"
"}\n"
"/*\346\214\211\351\222\256-\347\231\273\345\275\225-\351\274\240\346\240\207\346\214\211\344\270\213*/\n"
"#btn_login:pressed{\n"
"    color:#ffffff;\n"
"    border: none;\n"
"    background-color:#fd6c92;\n"
"    border-radius: 5px;\n"
"}\n"
"/*label-login*/\n"
"#label_login\n"
"{\n"
"    color:#e83737;\n"
"\n"
"}\n"
"/*\345\233\276\346\240\207-\350\264\246\346\210\267*/\n"
"#label_user_name\n"
"{\n"
"    border-image:url(:/res/pic/user_name.png);\n"
"}\n"
"/*\345\233\276\346\240\207-\345\257\206\347\240\201*/\n"
"#label_pwd\n"
"{\n"
"    border-image:url(:/res/pic/pwd.png);\n"
"\n"
"}\n"
"/*\346\214\211\351\222\256-qq*/\n"
"#btn_qq{\n"
"    background-image:url(:/res/pic/qq.png);\n"
"    background-posit"
                        "ion:center;\n"
"    background-repeat:no-repeat;\n"
"    border:none;\n"
"}\n"
"/*\346\214\211\351\222\256-qq-\351\274\240\346\240\207\346\202\254\345\201\234*/\n"
"#btn_qq:hover{\n"
"    background-image:url(:/res/pic/qq-hover.png);\n"
"    background-position:center;\n"
"    background-repeat:no-repeat;\n"
"    border:none;\n"
"}\n"
"/*\346\214\211\351\222\256-\345\276\256\344\277\241*/\n"
"#btn_wx{\n"
"    background-image:url(:/res/pic/wx.png);\n"
"    background-position:center;\n"
"    background-repeat:no-repeat;\n"
"    border:none;\n"
"}\n"
"/*\346\214\211\351\222\256-\345\276\256\344\277\241-\351\274\240\346\240\207\346\202\254\345\201\234*/\n"
"#btn_wx:hover{\n"
"    background-image:url(:/res/pic/wx-hover.png);\n"
"    background-position:center;\n"
"    background-repeat:no-repeat;\n"
"    border:none;\n"
"}\n"
"/*\346\214\211\351\222\256-\345\276\256\345\215\232-*/\n"
"#btn_wb{\n"
"    background-image:url(:/res/pic/wb.png);\n"
"    background-position:center;\n"
"    background-repeat:no-repeat;"
                        "\n"
"    border:none;\n"
"}\n"
"/*\346\214\211\351\222\256-\345\276\256\345\215\232-\351\274\240\346\240\207\346\202\254\345\201\234*/\n"
"#btn_wb:hover{\n"
"    background-image:url(:/res/pic/wb-hover.png);\n"
"    background-position:center;\n"
"    background-repeat:no-repeat;\n"
"    border:none;\n"
"}\n"
"\n"
"/*\346\214\211\351\222\256-\347\262\211\347\272\242*/\n"
"#btn_1{\n"
"color:#e83737;\n"
"background-color:#ffffff;\n"
"border:none;\n"
"border-radius: 10px;\n"
"}\n"
"/*\346\214\211\351\222\256-\351\273\204\347\273\277*/\n"
"#btn_2{\n"
"color:#d7b105;\n"
"background-color:#ffffff;\n"
"border:none;\n"
"border-radius: 10px;\n"
"}\n"
"/*\346\214\211\351\222\256-\346\265\205\347\264\253*/\n"
"#btn_3{\n"
"color:#7185ff;\n"
"background-color:#ffffff;\n"
"border:none;\n"
"border-radius: 10px;\n"
"}\n"
"/*\346\214\211\351\222\256-\351\235\222\347\273\277*/\n"
"#btn_4{\n"
"color:#7bb7a5;\n"
"background-color:#ffffff;\n"
"border:none;\n"
"border-radius: 10px;\n"
"}\n"
""));
        gridLayout_6 = new QGridLayout(Widget);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_background = new QFrame(Widget);
        frame_background->setObjectName(QString::fromUtf8("frame_background"));
        frame_background->setStyleSheet(QString::fromUtf8(""));
        frame_background->setFrameShape(QFrame::StyledPanel);
        frame_background->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_background);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_17 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);

        frame = new QFrame(frame_background);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        frame_login = new QFrame(widget);
        frame_login->setObjectName(QString::fromUtf8("frame_login"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_login->sizePolicy().hasHeightForWidth());
        frame_login->setSizePolicy(sizePolicy1);
        frame_login->setMinimumSize(QSize(500, 600));
        frame_login->setMaximumSize(QSize(500, 600));
        frame_login->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 0, 127);\n"
"\n"
"background-color: rgb(85, 0, 127);"));
        frame_login->setFrameShape(QFrame::StyledPanel);
        frame_login->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_login);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_login = new QLabel(frame_login);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(22);
        label_login->setFont(font);
        label_login->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 0);"));

        horizontalLayout->addWidget(label_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_20 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        frame_user_name = new QFrame(frame_login);
        frame_user_name->setObjectName(QString::fromUtf8("frame_user_name"));
        frame_user_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        frame_user_name->setFrameShape(QFrame::StyledPanel);
        frame_user_name->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_user_name);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_21 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);

        label_user_name = new QLabel(frame_user_name);
        label_user_name->setObjectName(QString::fromUtf8("label_user_name"));
        sizePolicy.setHeightForWidth(label_user_name->sizePolicy().hasHeightForWidth());
        label_user_name->setSizePolicy(sizePolicy);
        label_user_name->setMinimumSize(QSize(30, 30));
        label_user_name->setMaximumSize(QSize(30, 30));

        horizontalLayout_11->addWidget(label_user_name);

        lineE_user_name = new QLineEdit(frame_user_name);
        lineE_user_name->setObjectName(QString::fromUtf8("lineE_user_name"));
        lineE_user_name->setStyleSheet(QString::fromUtf8("color: rgb(71, 0, 106);"));

        horizontalLayout_11->addWidget(lineE_user_name);


        gridLayout_4->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(frame_user_name);

        horizontalSpacer_22 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_22);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        frame_pwd = new QFrame(frame_login);
        frame_pwd->setObjectName(QString::fromUtf8("frame_pwd"));
        frame_pwd->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        frame_pwd->setFrameShape(QFrame::StyledPanel);
        frame_pwd->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_pwd);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_pwd = new QLabel(frame_pwd);
        label_pwd->setObjectName(QString::fromUtf8("label_pwd"));
        sizePolicy.setHeightForWidth(label_pwd->sizePolicy().hasHeightForWidth());
        label_pwd->setSizePolicy(sizePolicy);
        label_pwd->setMinimumSize(QSize(30, 30));
        label_pwd->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(label_pwd);

        lineE_pwd = new QLineEdit(frame_pwd);
        lineE_pwd->setObjectName(QString::fromUtf8("lineE_pwd"));
        lineE_pwd->setStyleSheet(QString::fromUtf8("color: rgb(71, 0, 106);"));

        horizontalLayout_3->addWidget(lineE_pwd);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_pwd);

        horizontalSpacer_19 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_19);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        btn_forget = new QPushButton(frame_login);
        btn_forget->setObjectName(QString::fromUtf8("btn_forget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setUnderline(true);
        btn_forget->setFont(font1);
        btn_forget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));

        horizontalLayout_5->addWidget(btn_forget);

        horizontalSpacer_12 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        btn_login = new QPushButton(frame_login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        sizePolicy.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy);
        btn_login->setMinimumSize(QSize(320, 50));
        btn_login->setMaximumSize(QSize(320, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sitka Heading Semibold"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        btn_login->setFont(font2);
        btn_login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(71, 0, 107);\n"
"font: 600 12pt \"Sitka Heading Semibold\";"));

        horizontalLayout_6->addWidget(btn_login);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        btn_wx = new QPushButton(frame_login);
        btn_wx->setObjectName(QString::fromUtf8("btn_wx"));
        sizePolicy.setHeightForWidth(btn_wx->sizePolicy().hasHeightForWidth());
        btn_wx->setSizePolicy(sizePolicy);
        btn_wx->setMinimumSize(QSize(50, 50));
        btn_wx->setMaximumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(btn_wx);

        horizontalSpacer_7 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        btn_qq = new QPushButton(frame_login);
        btn_qq->setObjectName(QString::fromUtf8("btn_qq"));
        sizePolicy.setHeightForWidth(btn_qq->sizePolicy().hasHeightForWidth());
        btn_qq->setSizePolicy(sizePolicy);
        btn_qq->setMinimumSize(QSize(50, 50));
        btn_qq->setMaximumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(btn_qq);

        horizontalSpacer_8 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        btn_wb = new QPushButton(frame_login);
        btn_wb->setObjectName(QString::fromUtf8("btn_wb"));
        sizePolicy.setHeightForWidth(btn_wb->sizePolicy().hasHeightForWidth());
        btn_wb->setSizePolicy(sizePolicy);
        btn_wb->setMinimumSize(QSize(50, 50));
        btn_wb->setMaximumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(btn_wb);

        horizontalSpacer_9 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_8 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);


        gridLayout_5->addLayout(verticalLayout, 0, 0, 1, 1);

        label = new QLabel(frame_login);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_4, 2, 0, 1, 1);


        horizontalLayout_8->addWidget(frame_login);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        horizontalLayout_9->addWidget(frame);

        frame_pic = new QFrame(frame_background);
        frame_pic->setObjectName(QString::fromUtf8("frame_pic"));
        sizePolicy.setHeightForWidth(frame_pic->sizePolicy().hasHeightForWidth());
        frame_pic->setSizePolicy(sizePolicy);
        frame_pic->setMinimumSize(QSize(500, 600));
        frame_pic->setStyleSheet(QString::fromUtf8("background-image: url(:/res/pic/room,.png);"));
        frame_pic->setFrameShape(QFrame::StyledPanel);
        frame_pic->setFrameShadow(QFrame::Raised);
        widget_2 = new QWidget(frame_pic);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 10, 471, 61));
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/res/pic/background.jpg);"));
        textEdit = new QTextEdit(widget_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 471, 61));

        horizontalLayout_9->addWidget(frame_pic);

        horizontalSpacer_18 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalSpacer_10 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_6->addWidget(frame_background, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_login->setText(QCoreApplication::translate("Widget", "LOGIN", nullptr));
        label_user_name->setText(QString());
        lineE_user_name->setText(QCoreApplication::translate("Widget", "Enter your Account", nullptr));
        label_pwd->setText(QString());
        lineE_pwd->setText(QCoreApplication::translate("Widget", "Enter your password", nullptr));
        btn_forget->setText(QCoreApplication::translate("Widget", "Forget Password?", nullptr));
        btn_login->setText(QCoreApplication::translate("Widget", "Try Log In", nullptr));
        btn_wx->setText(QString());
        btn_qq->setText(QString());
        btn_wb->setText(QString());
        label->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; color:#ffff00;\">Face Rec Login</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
