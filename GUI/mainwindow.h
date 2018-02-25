#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "DoubleList/doublelist.h"
#include "TAD/tadrow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_main_generar_clicked();

    void on_btn_main_carga_clicked();

    void on_btn_main_agregar_clicked();

private:
    Ui::MainWindow *ui;
    List<TADRow *> *rows;
};

#endif // MAINWINDOW_H
