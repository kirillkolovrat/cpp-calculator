#pragma once

#include "enums.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

    void SetInputText(const std::string& text);
    void SetErrorText(const std::string& text);
    void SetFormulaText(const std::string& text);
    void SetMemText(const std::string& text);
    void SetExtraKey(const std::optional<std::string>& key);

    void SetDigitKeyCallback(std::function<void(int key)> cb);
    void SetProcessOperationKeyCallback(std::function<void(Operation key)> cb);
    void SetProcessControlKeyCallback(std::function<void(ControlKey key)> cb);
    void SetControllerCallback(std::function<void(ControllerType controller)> cb);

private slots:
    void on_number_button_clicked();
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
    void on_tb_extra_clicked();

    void cmb_controller_currentIndexChanged();

private:
    Ui::MainWindow* ui;

    std::optional<std::string> extra_key_;

    std::function<void(Operation key)> operation_cb_;
    std::function<void(int key)> digit_cb_;
    std::function<void(ControlKey key)> control_cb_;
    std::function<void(ControllerType controller)> controller_cb_;

};
