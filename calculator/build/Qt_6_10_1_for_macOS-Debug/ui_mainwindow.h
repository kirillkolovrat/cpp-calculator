/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *l_memory;
    QLabel *l_result;
    QPushButton *pb_nine;
    QPushButton *pb_ms;
    QPushButton *pb_mr;
    QPushButton *pb_power;
    QPushButton *pb_equal;
    QPushButton *pb_three;
    QPushButton *pb_backspace;
    QPushButton *pb_two;
    QPushButton *pb_seven;
    QLabel *l_formula;
    QPushButton *pb_eight;
    QPushButton *pb_substract;
    QPushButton *pb_six;
    QPushButton *pb_four;
    QPushButton *pb_divide;
    QPushButton *pb_one;
    QPushButton *pb_five;
    QPushButton *pb_reset;
    QPushButton *pb_mc;
    QPushButton *pb_add;
    QPushButton *pb_multiplicate;
    QPushButton *pb_negate;
    QPushButton *pb_comma;
    QPushButton *pb_zero;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(310, 362);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        l_memory = new QLabel(centralwidget);
        l_memory->setObjectName("l_memory");
        sizePolicy.setHeightForWidth(l_memory->sizePolicy().hasHeightForWidth());
        l_memory->setSizePolicy(sizePolicy);
        l_memory->setFont(font);

        horizontalLayout->addWidget(l_memory);

        l_result = new QLabel(centralwidget);
        l_result->setObjectName("l_result");
        sizePolicy.setHeightForWidth(l_result->sizePolicy().hasHeightForWidth());
        l_result->setSizePolicy(sizePolicy);
        l_result->setFont(font);
        l_result->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(l_result);

        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 5);

        pb_nine = new QPushButton(centralwidget);
        pb_nine->setObjectName("pb_nine");
        sizePolicy.setHeightForWidth(pb_nine->sizePolicy().hasHeightForWidth());
        pb_nine->setSizePolicy(sizePolicy);
        pb_nine->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Narrow")});
        font1.setPointSize(14);
        pb_nine->setFont(font1);

        gridLayout->addWidget(pb_nine, 5, 3, 1, 1);

        pb_ms = new QPushButton(centralwidget);
        pb_ms->setObjectName("pb_ms");
        pb_ms->setMinimumSize(QSize(0, 0));
        pb_ms->setFont(font1);

        gridLayout->addWidget(pb_ms, 2, 3, 1, 1);

        pb_mr = new QPushButton(centralwidget);
        pb_mr->setObjectName("pb_mr");
        pb_mr->setMinimumSize(QSize(0, 0));
        pb_mr->setFont(font1);

        gridLayout->addWidget(pb_mr, 2, 2, 1, 1);

        pb_power = new QPushButton(centralwidget);
        pb_power->setObjectName("pb_power");

        gridLayout->addWidget(pb_power, 2, 5, 1, 1);

        pb_equal = new QPushButton(centralwidget);
        pb_equal->setObjectName("pb_equal");
        sizePolicy.setHeightForWidth(pb_equal->sizePolicy().hasHeightForWidth());
        pb_equal->setSizePolicy(sizePolicy);
        pb_equal->setMinimumSize(QSize(0, 0));
        pb_equal->setFont(font1);

        gridLayout->addWidget(pb_equal, 9, 5, 1, 1);

        pb_three = new QPushButton(centralwidget);
        pb_three->setObjectName("pb_three");
        sizePolicy.setHeightForWidth(pb_three->sizePolicy().hasHeightForWidth());
        pb_three->setSizePolicy(sizePolicy);
        pb_three->setMinimumSize(QSize(0, 0));
        pb_three->setFont(font1);

        gridLayout->addWidget(pb_three, 8, 3, 1, 1);

        pb_backspace = new QPushButton(centralwidget);
        pb_backspace->setObjectName("pb_backspace");
        sizePolicy.setHeightForWidth(pb_backspace->sizePolicy().hasHeightForWidth());
        pb_backspace->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_backspace, 9, 3, 1, 1);

        pb_two = new QPushButton(centralwidget);
        pb_two->setObjectName("pb_two");
        sizePolicy.setHeightForWidth(pb_two->sizePolicy().hasHeightForWidth());
        pb_two->setSizePolicy(sizePolicy);
        pb_two->setMinimumSize(QSize(0, 0));
        pb_two->setFont(font1);

        gridLayout->addWidget(pb_two, 8, 2, 1, 1);

        pb_seven = new QPushButton(centralwidget);
        pb_seven->setObjectName("pb_seven");
        sizePolicy.setHeightForWidth(pb_seven->sizePolicy().hasHeightForWidth());
        pb_seven->setSizePolicy(sizePolicy);
        pb_seven->setMinimumSize(QSize(0, 0));
        pb_seven->setFont(font1);

        gridLayout->addWidget(pb_seven, 5, 1, 1, 1);

        l_formula = new QLabel(centralwidget);
        l_formula->setObjectName("l_formula");
        QFont font2;
        font2.setPointSize(10);
        l_formula->setFont(font2);
        l_formula->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(l_formula, 0, 1, 1, 5);

        pb_eight = new QPushButton(centralwidget);
        pb_eight->setObjectName("pb_eight");
        sizePolicy.setHeightForWidth(pb_eight->sizePolicy().hasHeightForWidth());
        pb_eight->setSizePolicy(sizePolicy);
        pb_eight->setMinimumSize(QSize(0, 0));
        pb_eight->setFont(font1);

        gridLayout->addWidget(pb_eight, 5, 2, 1, 1);

        pb_substract = new QPushButton(centralwidget);
        pb_substract->setObjectName("pb_substract");
        sizePolicy.setHeightForWidth(pb_substract->sizePolicy().hasHeightForWidth());
        pb_substract->setSizePolicy(sizePolicy);
        pb_substract->setMinimumSize(QSize(0, 0));
        pb_substract->setFont(font1);

        gridLayout->addWidget(pb_substract, 6, 5, 1, 1);

        pb_six = new QPushButton(centralwidget);
        pb_six->setObjectName("pb_six");
        sizePolicy.setHeightForWidth(pb_six->sizePolicy().hasHeightForWidth());
        pb_six->setSizePolicy(sizePolicy);
        pb_six->setMinimumSize(QSize(0, 0));
        pb_six->setFont(font1);

        gridLayout->addWidget(pb_six, 6, 3, 1, 1);

        pb_four = new QPushButton(centralwidget);
        pb_four->setObjectName("pb_four");
        sizePolicy.setHeightForWidth(pb_four->sizePolicy().hasHeightForWidth());
        pb_four->setSizePolicy(sizePolicy);
        pb_four->setMinimumSize(QSize(0, 0));
        pb_four->setFont(font1);

        gridLayout->addWidget(pb_four, 6, 1, 1, 1);

        pb_divide = new QPushButton(centralwidget);
        pb_divide->setObjectName("pb_divide");
        sizePolicy.setHeightForWidth(pb_divide->sizePolicy().hasHeightForWidth());
        pb_divide->setSizePolicy(sizePolicy);
        pb_divide->setMinimumSize(QSize(0, 0));
        pb_divide->setFont(font1);

        gridLayout->addWidget(pb_divide, 4, 5, 1, 1);

        pb_one = new QPushButton(centralwidget);
        pb_one->setObjectName("pb_one");
        sizePolicy.setHeightForWidth(pb_one->sizePolicy().hasHeightForWidth());
        pb_one->setSizePolicy(sizePolicy);
        pb_one->setMinimumSize(QSize(0, 0));
        pb_one->setFont(font1);

        gridLayout->addWidget(pb_one, 8, 1, 1, 1);

        pb_five = new QPushButton(centralwidget);
        pb_five->setObjectName("pb_five");
        sizePolicy.setHeightForWidth(pb_five->sizePolicy().hasHeightForWidth());
        pb_five->setSizePolicy(sizePolicy);
        pb_five->setMinimumSize(QSize(0, 0));
        pb_five->setFont(font1);

        gridLayout->addWidget(pb_five, 6, 2, 1, 1);

        pb_reset = new QPushButton(centralwidget);
        pb_reset->setObjectName("pb_reset");
        sizePolicy.setHeightForWidth(pb_reset->sizePolicy().hasHeightForWidth());
        pb_reset->setSizePolicy(sizePolicy);
        pb_reset->setMinimumSize(QSize(0, 0));
        pb_reset->setFont(font1);

        gridLayout->addWidget(pb_reset, 4, 1, 1, 2);

        pb_mc = new QPushButton(centralwidget);
        pb_mc->setObjectName("pb_mc");
        pb_mc->setMinimumSize(QSize(0, 0));
        pb_mc->setFont(font1);

        gridLayout->addWidget(pb_mc, 2, 1, 1, 1);

        pb_add = new QPushButton(centralwidget);
        pb_add->setObjectName("pb_add");
        sizePolicy.setHeightForWidth(pb_add->sizePolicy().hasHeightForWidth());
        pb_add->setSizePolicy(sizePolicy);
        pb_add->setMinimumSize(QSize(0, 0));
        pb_add->setFont(font1);

        gridLayout->addWidget(pb_add, 8, 5, 1, 1);

        pb_multiplicate = new QPushButton(centralwidget);
        pb_multiplicate->setObjectName("pb_multiplicate");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_multiplicate->sizePolicy().hasHeightForWidth());
        pb_multiplicate->setSizePolicy(sizePolicy1);
        pb_multiplicate->setMinimumSize(QSize(0, 0));
        pb_multiplicate->setFont(font1);

        gridLayout->addWidget(pb_multiplicate, 5, 5, 1, 1);

        pb_negate = new QPushButton(centralwidget);
        pb_negate->setObjectName("pb_negate");
        sizePolicy.setHeightForWidth(pb_negate->sizePolicy().hasHeightForWidth());
        pb_negate->setSizePolicy(sizePolicy);
        pb_negate->setMinimumSize(QSize(0, 0));
        pb_negate->setFont(font1);

        gridLayout->addWidget(pb_negate, 4, 3, 1, 1);

        pb_comma = new QPushButton(centralwidget);
        pb_comma->setObjectName("pb_comma");
        sizePolicy.setHeightForWidth(pb_comma->sizePolicy().hasHeightForWidth());
        pb_comma->setSizePolicy(sizePolicy);
        pb_comma->setMinimumSize(QSize(0, 0));
        pb_comma->setFont(font1);

        gridLayout->addWidget(pb_comma, 9, 1, 1, 1);

        pb_zero = new QPushButton(centralwidget);
        pb_zero->setObjectName("pb_zero");
        sizePolicy.setHeightForWidth(pb_zero->sizePolicy().hasHeightForWidth());
        pb_zero->setSizePolicy(sizePolicy);
        pb_zero->setMinimumSize(QSize(0, 0));
        pb_zero->setFont(font1);

        gridLayout->addWidget(pb_zero, 9, 2, 1, 1);

        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 2);
        gridLayout->setColumnStretch(3, 2);
        gridLayout->setColumnStretch(5, 3);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        l_memory->setText(QCoreApplication::translate("MainWindow", "l_memory", nullptr));
        l_result->setText(QCoreApplication::translate("MainWindow", "l_result", nullptr));
        pb_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        pb_nine->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_ms->setText(QCoreApplication::translate("MainWindow", "MS", nullptr));
        pb_mr->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        pb_power->setText(QCoreApplication::translate("MainWindow", "x\312\270", nullptr));
        pb_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        pb_equal->setShortcut(QCoreApplication::translate("MainWindow", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        pb_three->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_backspace->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        pb_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        pb_two->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        pb_seven->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        l_formula->setText(QCoreApplication::translate("MainWindow", "l_formula", nullptr));
        pb_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        pb_eight->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_substract->setText(QCoreApplication::translate("MainWindow", "\342\210\222", nullptr));
#if QT_CONFIG(shortcut)
        pb_substract->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        pb_six->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        pb_four->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
#if QT_CONFIG(shortcut)
        pb_divide->setShortcut(QCoreApplication::translate("MainWindow", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        pb_one->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        pb_five->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_reset->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
#if QT_CONFIG(shortcut)
        pb_reset->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_mc->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        pb_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
        pb_add->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_multiplicate->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
#if QT_CONFIG(shortcut)
        pb_multiplicate->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        pb_negate->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        pb_comma->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pb_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
