#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_cmd_Operar_clicked();
    void recibedatos(int t, double e);

private:
    Ui::MainWindow *ui;
    int tipo;
    double esc;
};
#endif // MAINWINDOW_H
