/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 300));
        MainWindow->setMaximumSize(QSize(500, 300));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(50, 10));

        horizontalLayout_2->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(50, 0));
        pushButton_2->setMaximumSize(QSize(50, 25));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("folder-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButton_2->setIcon(icon);
        pushButton_2->setAutoDefault(false);

        horizontalLayout_3->addWidget(pushButton_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(lineEdit);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");

        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout_6->addLayout(verticalLayout_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(browse()));
        QObject::connect(MainWindow, SIGNAL(fileName(QString)), label_2, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pagination App", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Input text:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Output text:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Paginate", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
