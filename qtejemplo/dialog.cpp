#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    esc = 0. ;
    tipo = 0;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_rdb_BA_clicked()
{
  ui->txt_Escalar->setEnabled(false);
  tipo = 1;
}

void Dialog::on_rdb_AB_clicked()
{
   ui->txt_Escalar->setEnabled(false);
   tipo = 0;
}


void Dialog::on_rdb_AE_clicked()
{
   ui->txt_Escalar->setEnabled(true);
   tipo = 2;
}

/*
void Dialog::pasadatos(int t, double e)
{
    t = tipo;
    e = esc;
}
*/

void Dialog::on_rdb_BE_clicked()
{
    ui->txt_Escalar->setEnabled(true);
    tipo = 4;
}


void Dialog::on_buttonBox_accepted()
{
    esc = ui->txt_Escalar->text().toDouble();
    emit pasadatos(tipo, esc);
}

