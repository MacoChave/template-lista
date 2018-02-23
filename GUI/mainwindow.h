#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "DoubleList/doublelist.h"
#include "TAD/tadobjeto.h"
#include "TAD/tadperro.h"

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
    DoubleList<TADObjeto *> * lista;
    DoubleList<TADPerro *> *perros;
};

#endif // MAINWINDOW_H
