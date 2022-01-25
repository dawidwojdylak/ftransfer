/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_login;
    QPushButton *pushButton_logout;
    QFrame *line;
    QComboBox *comboBox_table;
    QPushButton *pushButton_input;
    QPushButton *pushButton_save;
    QFrame *line_6;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_sort;
    QRadioButton *radioButton_up;
    QRadioButton *radioButton_down;
    QFrame *line_7;
    QLabel *label_2;
    QFormLayout *formLayout;
    QPushButton *pushButton_ava;
    QPushButton *pushButton_unav;
    QPushButton *pushButton_cAv;
    QPushButton *pushButton_cUnav;
    QFrame *line_4;
    QFrame *line_3;
    QFrame *line_5;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QComboBox *comboBox_tablestretch;
    QFrame *line_2;
    QPushButton *pushButton_submit;
    QPlainTextEdit *queryInput;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QTextBrowser *appOstream;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 800);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(pushButton_login);

        pushButton_logout = new QPushButton(centralwidget);
        pushButton_logout->setObjectName(QString::fromUtf8("pushButton_logout"));
        pushButton_logout->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(pushButton_logout);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMaximumSize(QSize(200, 16777215));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        comboBox_table = new QComboBox(centralwidget);
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->addItem(QString());
        comboBox_table->setObjectName(QString::fromUtf8("comboBox_table"));
        comboBox_table->setEnabled(false);
        comboBox_table->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(comboBox_table);

        pushButton_input = new QPushButton(centralwidget);
        pushButton_input->setObjectName(QString::fromUtf8("pushButton_input"));
        pushButton_input->setEnabled(false);
        pushButton_input->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(pushButton_input);

        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setEnabled(false);
        pushButton_save->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(pushButton_save);

        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setMaximumSize(QSize(200, 16777215));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_6);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox_sort = new QComboBox(centralwidget);
        comboBox_sort->addItem(QString());
        comboBox_sort->addItem(QString());
        comboBox_sort->addItem(QString());
        comboBox_sort->addItem(QString());
        comboBox_sort->setObjectName(QString::fromUtf8("comboBox_sort"));

        horizontalLayout_3->addWidget(comboBox_sort);

        radioButton_up = new QRadioButton(centralwidget);
        radioButton_up->setObjectName(QString::fromUtf8("radioButton_up"));
        radioButton_up->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_up);

        radioButton_down = new QRadioButton(centralwidget);
        radioButton_down->setObjectName(QString::fromUtf8("radioButton_down"));

        horizontalLayout_3->addWidget(radioButton_down);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setMaximumSize(QSize(200, 16777215));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_7);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(label_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton_ava = new QPushButton(centralwidget);
        pushButton_ava->setObjectName(QString::fromUtf8("pushButton_ava"));
        pushButton_ava->setEnabled(false);
        pushButton_ava->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_ava);

        pushButton_unav = new QPushButton(centralwidget);
        pushButton_unav->setObjectName(QString::fromUtf8("pushButton_unav"));
        pushButton_unav->setEnabled(false);
        pushButton_unav->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_unav);

        pushButton_cAv = new QPushButton(centralwidget);
        pushButton_cAv->setObjectName(QString::fromUtf8("pushButton_cAv"));
        pushButton_cAv->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_cAv);

        pushButton_cUnav = new QPushButton(centralwidget);
        pushButton_cUnav->setObjectName(QString::fromUtf8("pushButton_cUnav"));
        pushButton_cUnav->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_cUnav);


        verticalLayout_2->addLayout(formLayout);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        comboBox_tablestretch = new QComboBox(centralwidget);
        comboBox_tablestretch->addItem(QString());
        comboBox_tablestretch->addItem(QString());
        comboBox_tablestretch->addItem(QString());
        comboBox_tablestretch->setObjectName(QString::fromUtf8("comboBox_tablestretch"));
        comboBox_tablestretch->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(comboBox_tablestretch);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMaximumSize(QSize(200, 16777215));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        pushButton_submit = new QPushButton(centralwidget);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        pushButton_submit->setMaximumSize(QSize(200, 16777215));

        verticalLayout_2->addWidget(pushButton_submit);

        queryInput = new QPlainTextEdit(centralwidget);
        queryInput->setObjectName(QString::fromUtf8("queryInput"));
        queryInput->setMinimumSize(QSize(0, 0));
        queryInput->setMaximumSize(QSize(200, 100));
        queryInput->setBackgroundVisible(true);

        verticalLayout_2->addWidget(queryInput);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        appOstream = new QTextBrowser(centralwidget);
        appOstream->setObjectName(QString::fromUtf8("appOstream"));
        appOstream->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(appOstream);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAbout);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Zaloguj si\304\231", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("MainWindow", "Wyloguj si\304\231", nullptr));
        comboBox_table->setItemText(0, QCoreApplication::translate("MainWindow", "Adres czytelnika", nullptr));
        comboBox_table->setItemText(1, QCoreApplication::translate("MainWindow", "Autor", nullptr));
        comboBox_table->setItemText(2, QCoreApplication::translate("MainWindow", "Czytelnik", nullptr));
        comboBox_table->setItemText(3, QCoreApplication::translate("MainWindow", "e_czytnik", nullptr));
        comboBox_table->setItemText(4, QCoreApplication::translate("MainWindow", "Karta biblioteczna", nullptr));
        comboBox_table->setItemText(5, QCoreApplication::translate("MainWindow", "Ksi\304\205\305\274ka", nullptr));
        comboBox_table->setItemText(6, QCoreApplication::translate("MainWindow", "P\305\202yta CD", nullptr));
        comboBox_table->setItemText(7, QCoreApplication::translate("MainWindow", "P\305\202yta film", nullptr));
        comboBox_table->setItemText(8, QCoreApplication::translate("MainWindow", "P\305\202yta muzyka", nullptr));
        comboBox_table->setItemText(9, QCoreApplication::translate("MainWindow", "Sztuka", nullptr));
        comboBox_table->setItemText(10, QCoreApplication::translate("MainWindow", "Wydawnictwo", nullptr));
        comboBox_table->setItemText(11, QCoreApplication::translate("MainWindow", "Widok: Ksi\304\205\305\274ka-autor-wydawnictwo", nullptr));

        pushButton_input->setText(QCoreApplication::translate("MainWindow", "Wprowad\305\272 dane", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "Zapisz dane", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sortuj:", nullptr));
        comboBox_sort->setItemText(0, QCoreApplication::translate("MainWindow", "-", nullptr));
        comboBox_sort->setItemText(1, QCoreApplication::translate("MainWindow", "Imi\304\231", nullptr));
        comboBox_sort->setItemText(2, QCoreApplication::translate("MainWindow", "Nazwisko", nullptr));
        comboBox_sort->setItemText(3, QCoreApplication::translate("MainWindow", "Tytu\305\202", nullptr));

        radioButton_up->setText(QCoreApplication::translate("MainWindow", "Ros.", nullptr));
        radioButton_down->setText(QCoreApplication::translate("MainWindow", "Mal.", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Widoki:", nullptr));
        pushButton_ava->setText(QCoreApplication::translate("MainWindow", "Dost\304\231pne", nullptr));
        pushButton_unav->setText(QCoreApplication::translate("MainWindow", "Wypo\305\274yczone", nullptr));
        pushButton_cAv->setText(QCoreApplication::translate("MainWindow", "Ilo\305\233\304\207 dost.", nullptr));
        pushButton_cUnav->setText(QCoreApplication::translate("MainWindow", "Ilo\305\233\304\207 wyp.", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tryb tabeli:", nullptr));
        comboBox_tablestretch->setItemText(0, QCoreApplication::translate("MainWindow", "Dopasowany do zawarto\305\233ci", nullptr));
        comboBox_tablestretch->setItemText(1, QCoreApplication::translate("MainWindow", "Interaktywny", nullptr));
        comboBox_tablestretch->setItemText(2, QCoreApplication::translate("MainWindow", "Wype\305\202niaj\304\205cy okno", nullptr));

        pushButton_submit->setText(QCoreApplication::translate("MainWindow", "Wy\305\233lij zapytanie", nullptr));
        queryInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "SELECT * FROM customer;", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
