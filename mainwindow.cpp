#include "mainwindow.h"
#include "qdebug.h"
#include "entrada.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    configuracaoInicial();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pBSaidas_clicked()
{
    qDebug() <<"saiu";
    Saida s ;
    s.exec();
}

void MainWindow::on_pBEntradas_clicked()
{
ui->stPrincipal->setCurrentIndex(1);
}

void MainWindow::configuracaoInicial()
{
    setConnects();
    Entrada* entrada = new Entrada;
    ui->stPrincipal->addWidget(entrada);
}

void MainWindow::setConnects()
{
    connect(ui->pBEntrada,SIGNAL(clicked()),this,SLOT(on_pBEntradas_clicked()));
    connect(ui->pBSaida,SIGNAL(clicked()),this,SLOT(on_pBSaidas_clicked()));

}
