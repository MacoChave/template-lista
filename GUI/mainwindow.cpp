#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lista = new DoubleList<TADObjeto *>();
    perros = new DoubleList<TADPerro *>();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete lista;
    delete perros;
}

void MainWindow::on_btn_main_generar_clicked()
{
    lista->graph("lista");
    perros->graph("perros");
}

void MainWindow::on_btn_main_carga_clicked()
{
    TADPerro *perro1 = new TADPerro("Pastor Aleman", "Negro y Café", "Bobby");
    TADPerro *perro2 = new TADPerro("Pastor Aleman", "Dorado", "Rambo");
    TADPerro *perro3 = new TADPerro("Pastor Labrador", "Café", "Chiky");
    TADPerro *perro4 = new TADPerro("French", "Blanco", "Nieve");
    TADPerro *perro5 = new TADPerro("French", "Blanco y Canela", "Canelo");

    perros->push_back(perro1);
    perros->push_back(perro2);
    perros->push_back(perro3);
    perros->push_back(perro4);
    perros->push_back(perro5);
}

void MainWindow::on_btn_main_agregar_clicked()
{
    for (int i = 0; i < 10; i++)
    {
        QString name("Objeto ");
        name.append(QString::number(i));
        TADObjeto *objeto = new TADObjeto();
        objeto->setId(i);
        objeto->setNombre(name);

        lista->push_back(objeto);
    }
}
