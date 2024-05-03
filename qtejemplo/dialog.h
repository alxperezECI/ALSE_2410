#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:
    void pasadatos(int t, double e);

private slots:
    void on_rdb_BA_clicked();
    void on_rdb_AB_clicked();
    void on_rdb_AE_clicked();
    void on_rdb_BE_clicked();
    void on_buttonBox_accepted();

private:
    Ui::Dialog *ui;
    double esc;
    int tipo;
};

#endif // DIALOG_H
