#include "mainwindow.h"
#include "ui_mainwindow.h"

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
        return NormalizeNumber("0" + text);
    }
    if (text.startsWith('-')) {
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

    connect(ui->cmb_controller, &QComboBox::currentIndexChanged, this, &MainWindow::cmb_controller_currentIndexChanged);
}

MainWindow::~MainWindow() {

    delete ui;
}

void MainWindow::on_number_button_clicked() {
    QPushButton* sender = dynamic_cast<QPushButton*>(QObject::sender());
    digit_cb_(sender->text().toInt());
}

void MainWindow::on_tb_extra_clicked() {
    control_cb_(ControlKey::EXTRA_KEY);
}

void MainWindow::on_pb_backspace_clicked() {
    control_cb_(ControlKey::BACKSPACE);
}

void MainWindow::on_pb_negate_clicked() {
    control_cb_(ControlKey::PLUS_MINUS);
}

void MainWindow::on_pb_power_clicked() {
    operation_cb_(Operation::POWER);
}

void MainWindow::on_pb_divide_clicked() {
    operation_cb_(Operation::DIVISION);
}

void MainWindow::on_pb_multiplicate_clicked() {
    operation_cb_(Operation::MULTIPLICATION);
}

void MainWindow::on_pb_substract_clicked() {
    operation_cb_(Operation::SUBTRACTION);
}

void MainWindow::on_pb_add_clicked() {
    operation_cb_(Operation::ADDITION);
}

void MainWindow::on_pb_equal_clicked() {
    control_cb_(ControlKey::EQUALS);
}

void MainWindow::on_pb_reset_clicked() {
    control_cb_(ControlKey::CLEAR);
}

void MainWindow::on_pb_ms_clicked() {
    control_cb_(ControlKey::MEM_SAVE);
}

void MainWindow::on_pb_mc_clicked() {
    control_cb_(ControlKey::MEM_CLEAR);
}

void MainWindow::on_pb_mr_clicked() {
    control_cb_(ControlKey::MEM_LOAD);
}

void MainWindow::cmb_controller_currentIndexChanged(){
    int current_index_cb = ui->cmb_controller->currentIndex();

    switch (current_index_cb) {
    case 0 :
        controller_cb_(ControllerType::DOUBLE);
        break;
    case 1 :
        controller_cb_(ControllerType::FLOAT);
        break;
    case 2 :
        controller_cb_(ControllerType::UINT8_T);
        break;
    case 3 :
        controller_cb_(ControllerType::INT);
        break;
    case 4 :
        controller_cb_(ControllerType::INT64_T);
        break;
    case 5 :
        controller_cb_(ControllerType::SIZE_T);
        break;
    case 6 :
        controller_cb_(ControllerType::RATIONAL);
        break;
    }
}

void MainWindow::SetInputText(const std::string& text){
    ui->l_result->setStyleSheet("color: black;");
    ui->l_result ->setText(QString::fromStdString(text));
}

void MainWindow::SetErrorText(const std::string& text){
    ui->l_result->setStyleSheet("color: red;");
    ui->l_result->setText(QString::fromStdString(text));
}

void MainWindow::SetFormulaText(const std::string& text){
    ui->l_formula->setText(QString::fromStdString(text));
}

void MainWindow::SetMemText(const std::string& text){
    ui->l_memory->setText(QString::fromStdString(text));
}

void MainWindow::SetExtraKey(const std::optional<std::string>& key){
    extra_key_ = key;

    if (extra_key_.has_value()){
        ui->tb_extra->setVisible(true);
        ui->tb_extra->setText(QString::fromStdString(key.value()));

        return;
    }

    ui->tb_extra->setVisible(false);
};

void MainWindow::SetDigitKeyCallback(std::function<void(int key)> cb){
    digit_cb_ = cb;
};

void MainWindow::SetProcessOperationKeyCallback(std::function<void(Operation key)> cb){
    operation_cb_ = cb;
};

void MainWindow::SetProcessControlKeyCallback(std::function<void(ControlKey key)> cb){
    control_cb_ = cb;
};

void MainWindow::SetControllerCallback(std::function<void(ControllerType controller)> cb){
    controller_cb_ = cb;
};
