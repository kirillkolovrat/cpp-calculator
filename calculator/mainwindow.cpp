#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QPushButton>


QString RemoveTrailingZeroes(const QString &text) {

    for (qsizetype i = 0; i < text.size(); ++i) {
        if (text[i] != '0') {
            return text.mid(i);
        }
    }
    return "";
}

QString NormalizeNumber(const QString &text) {

    if (text.isEmpty()) {
        return "0";
    }
    if (text.startsWith('.')) {
        // Рекурсивный вызов.
        return NormalizeNumber("0" + text);
    }
    if (text.startsWith('-')) {
        // Рекурсивный вызов.
        return "-" + NormalizeNumber(text.mid(1));
    }
    if (text.startsWith('0') && !text.startsWith("0.")) {
        return NormalizeNumber(RemoveTrailingZeroes(text));
    }
    return text;
}

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);
    ui->l_result->setText("0");
    ui->l_memory->setText("");
    ui->l_formula->setText("");

    SetText("0");

    connect(ui->pb_zero, &QPushButton::clicked, this, &MainWindow::on_number_button_clicked);
    connect(ui->pb_one, &QPushButton::clicked, this, &MainWindow::on_number_button_clicked);
    connect(ui->pb_two, &QPushButton::clicked, this, &MainWindow::on_number_button_clicked);
    connect(ui->pb_three, &QPushButton::clicked, this, &MainWindow::on_number_button_clicked);
    connect(ui->pb_four, &QPushButton::clicked, this, &MainWindow::on_number_button_clicked);
    connect(ui->pb_five, &QPushButton::clicked, this, &MainWindow::on_number_button_clicked);
    connect(ui->pb_six, &QPushButton::clicked, this, &MainWindow::on_number_button_clicked);
    connect(ui->pb_seven, &QPushButton::clicked, this, &MainWindow::on_number_button_clicked);
    connect(ui->pb_eight, &QPushButton::clicked, this, &MainWindow::on_number_button_clicked);
    connect(ui->pb_nine, &QPushButton::clicked, this, &MainWindow::on_number_button_clicked);
}

MainWindow::~MainWindow() {

    delete ui;
}

void MainWindow::SetText(const QString& text) {

    input_number_ = text;
    active_number_ = input_number_.toDouble();
    ui->l_result->setText(input_number_);
}

void MainWindow::AddText(const QString &suffix) {

    SetText(NormalizeNumber(input_number_ + suffix));
}

void MainWindow::on_number_button_clicked() {

    QPushButton* sender = dynamic_cast<QPushButton*>(QObject::sender());

    if (entering_new_number_) {
        entering_new_number_ = false;
        SetText(sender->text());

        return;
    }

    AddText(sender->text());
}

void MainWindow::on_pb_comma_clicked() {

    if (input_number_.contains(".")) {
        return;
    }

    AddText(".");
}

void MainWindow::on_pb_backspace_clicked() {

    if ((input_number_.startsWith("-") && input_number_.size() == 2) || input_number_.size() == 1) {
        SetText("0");
        return;
    }

    input_number_.chop(1);
    ui->l_result->setText(input_number_);
}

void MainWindow::on_pb_negate_clicked() {

    if (input_number_.startsWith("-")) {
        SetText(input_number_.mid(1));
    } else {
        SetText("-" + input_number_);
    }
}

void MainWindow::SetOperation(Operation op) {

    calculator_.Set(active_number_);
    entering_new_number_ = true;

    current_operation_ = op;
    ui->l_formula->setText(input_number_ + " " + OpToString(op));
}

QString MainWindow::OpToString(Operation op) {

    switch(op) {
        case Operation::NO_OPERATION: return "";
        case Operation::ADDITION: return "+";
        case Operation::DIVISION: return "÷";
        case Operation::MULTIPLICATION: return "×";
        case Operation::SUBTRACTION: return "−";
        case Operation::POWER: return "^";
    }
}

void MainWindow::on_pb_power_clicked() {

    SetOperation(Operation::POWER);
}

void MainWindow::on_pb_divide_clicked() {

    SetOperation(Operation::DIVISION);
}

void MainWindow::on_pb_multiplicate_clicked() {

    SetOperation(Operation::MULTIPLICATION);
}

void MainWindow::on_pb_substract_clicked() {

    SetOperation(Operation::SUBTRACTION);
}

void MainWindow::on_pb_add_clicked() {

    SetOperation(Operation::ADDITION);
}

void MainWindow::on_pb_equal_clicked() {

    ui->l_formula->setText(QString("%1 %2 %3 =")
                                 .arg(calculator_.GetNumber())
                                 .arg(OpToString(current_operation_))
                                 .arg(input_number_));

    switch(current_operation_) {
        case Operation::ADDITION:
            calculator_.Add(active_number_);
            break;
        case Operation::DIVISION:
            calculator_.Div(active_number_);
            break;
        case Operation::MULTIPLICATION:
            calculator_.Mul(active_number_);
            break;
        case Operation::SUBTRACTION:
            calculator_.Sub(active_number_);
            break;
        case Operation::POWER:
            calculator_.Pow(active_number_);
            break;
        default:
            return;
    }

    entering_new_number_ = true;
    active_number_ = calculator_.GetNumber();
    input_number_ = QString::number(active_number_);
    ui->l_result->setText(input_number_);
}

void MainWindow::on_pb_reset_clicked() {

    current_operation_ = Operation::NO_OPERATION;
    ui->l_formula->setText("");
    SetText("0");
}

void MainWindow::on_pb_ms_clicked() {

    calculator_.Set(active_number_);
    calculator_.Save();
    ui->l_memory->setText("M");
}

void MainWindow::on_pb_mc_clicked() {

    calculator_.Clear();
    ui->l_memory->setText("");
}

void MainWindow::on_pb_mr_clicked() {

    if (calculator_.HasMem()) {
        calculator_.Load();
        active_number_ = calculator_.GetNumber();
        ui->l_result->setText(QString::number(active_number_));
    }
}
