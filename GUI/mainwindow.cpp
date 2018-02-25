#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    rows = new List<TADRow *>();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete rows;
    delete ui;
}

void MainWindow::on_btn_main_generar_clicked()
{
    rows->graph("Filas");
}

void MainWindow::on_btn_main_carga_clicked()
{
}

void MainWindow::on_btn_main_agregar_clicked()
{
    QString row = ui->edt_main_nit->text();
    rows->insert(new TADRow(row.toInt()));
    ui->edt_main_nombre->clear();
    ui->edt_main_nit->clear();
//    rows << new TADRow(row.toInt());
}
