#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lista = new DoubleList<int>();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete lista;
}

void MainWindow::on_btn_main_generar_clicked()
{
}

void MainWindow::on_btn_main_carga_clicked()
{
}

void MainWindow::on_btn_main_agregar_clicked()
{
    for (int i = 0; i < 10; i++)
    {
        lista->push_back(i);
    }
}
