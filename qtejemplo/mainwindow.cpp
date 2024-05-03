#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"
#include <eigen3/Eigen/Dense>

using Eigen::MatrixXd;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_cmd_Operar_clicked()
{
  MatrixXd A(2,2), B(2,2), R(2,2);
  A(0,0) = ui->txt_A11->text().toDouble();
  A(0,1) = ui->txt_A12->text().toDouble();
  A(1,0) = ui->txt_A21->text().toDouble();
  A(1,1) = ui->txt_A22->text().toDouble();

  B(0,0) = ui->txt_B11->text().toDouble();
  B(0,1) = ui->txt_B12->text().toDouble();
  B(1,0) = ui->txt_B21->text().toDouble();
  B(1,1) = ui->txt_B22->text().toDouble();

  switch (ui->cbo_Operador->currentIndex()){
    case 0:
      R = A + B;
      break;
  case 1:
      R = A - B;
      break;
  case 2:
      R = A * B;
      break;
  case 3:
      Dialog d(this);
      QObject::connect(&d, &Dialog::pasadatos,
                       this, &MainWindow::recibedatos);
      d.show();
      d.setModal(true);
      d.exec();

      //R = A * B.inverse();
      ui->txt_R11->setText(QString::number(esc));
      ui->txt_R12->setText(QString::number(tipo));
      break;
  }
/*
  ui->txt_R11->setText(QString::number( R(0,0) ) );
  ui->txt_R12->setText(QString::number( R(0,1) ) );
  ui->txt_R21->setText(QString::number( R(1,0) ) );
  ui->txt_R22->setText(QString::number( R(1,1) ) );
*/
}

void MainWindow::recibedatos(int t, double e)
{
    esc = e;
    tipo = t;
}
