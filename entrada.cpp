#include "entrada.h"
#include "qdebug.h"
#include "mainwindow.h"
#include "ui_entrada.h"

Entrada::Entrada(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Entrada)
{
    ui->setupUi(this);
    configuracaoInicial();
}

Entrada::~Entrada()
{
    delete ui;
}

void Entrada::on_pB_Volta()
{
    qDebug() << "aqui";
    MainWindow * m = new MainWindow;
    ui->sTEntrada->addWidget(m);
   ui->sTEntrada->setCurrentIndex(1);
}
void Entrada::configuracaoInicial()
{
    setConncts();


}
void Entrada::setConncts()
{
    connect(ui->pB_Voltar,SIGNAL(clicked()),this,SLOT(on_pB_Volta()));

}
