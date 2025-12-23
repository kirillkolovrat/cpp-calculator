#pragma once

#include "calculator.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum class Operation {
    NO_OPERATION,
    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION,
    POWER
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    void SetText(const QString& text);

    void AddText(const QString& suffix);

    void SetOperation(Operation op);

    static QString OpToString(Operation op);

private slots:
    void on_number_button_clicked();

    void on_pb_comma_clicked();

    void on_pb_backspace_clicked();

    void on_pb_negate_clicked();

    void on_pb_power_clicked();

    void on_pb_divide_clicked();

    void on_pb_multiplicate_clicked();

    void on_pb_substract_clicked();

    void on_pb_add_clicked();

    void on_pb_equal_clicked();

    void on_pb_reset_clicked();

    void on_pb_ms_clicked();

    void on_pb_mc_clicked();

    void on_pb_mr_clicked();

private:
    Ui::MainWindow* ui;

    Calculator calculator_;

    QString input_number_;

    Number active_number_ = 0;

    Operation current_operation_= Operation::NO_OPERATION;

    bool entering_new_number_ = true;
};
