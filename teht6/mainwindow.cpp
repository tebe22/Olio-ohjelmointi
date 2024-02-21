#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    operand = -1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->text();

    if (operand == -1) {
        number1 += name;
        ui->num1->setText(number1);
    } else {
        number2 += name;
        ui->num2->setText(number2);
    }
}

void MainWindow::ClearAndEnterClickHandler()
{
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();

    if (operand != -1){
        switch(operand) {
        case 0:
            result = n1 + n2;
            break;
        case 1:
            result = n1 - n2;
            break;
        case 2:
            result = n1 * n2;
            break;
        case 3:
            result = n1 / n2;
            break;
        }
        ui->result->setText(QString::number(result));
    }
    operand = -1;
}

void MainWindow::addSubMulDivClickHandler(int op)
{
    operand = op;
}

void MainWindow::resetLineEdits()
{
    number1.clear();
    number2.clear();
    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");
}
void MainWindow::on_N1_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N2_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N3_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N4_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N5_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N6_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N7_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N8_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N9_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N0_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_add_clicked()
{
    addSubMulDivClickHandler(0);
}

void MainWindow::on_sub_clicked()
{
    addSubMulDivClickHandler(1);
}

void MainWindow::on_mul_clicked()
{
    addSubMulDivClickHandler(2);
}

void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler(3);
}

void MainWindow::on_clear_clicked()
{
    resetLineEdits();
}

void MainWindow::on_enter_clicked()
{
    ClearAndEnterClickHandler();
}
