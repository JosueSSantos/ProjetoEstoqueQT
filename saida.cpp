#include "saida.h"]
#include "qdebug.h"
#include "ui_saida.h"
#include "Components/btpesquisarfilial.h"

Saida::Saida(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Saida)
{
    ui->setupUi(this);
    configuracaoInicial();
}

Saida::~Saida()
{
    delete ui;
}

void Saida::on_pB_Saida()
{
    ItemPedido* itempedido = new ItemPedido;
    ui->sTSaida->addWidget(itempedido);
        ui->sTSaida->setCurrentIndex(1);
        qDebug() << "Chegou em saida";
}


void Saida::on_pB_searchFilial_clicked()
{
    qDebug() << "Chegou pesquisar Filial";
    btPesquisarFilial bt;
    bt.show();

}

void Saida::configuracaoInicial()
{
setConnects();

}

void Saida::setConnects()
{
    connect(ui->pB_searchFilial,SIGNAL(clicked()), this,SLOT(on_pB_searchFilial_clicked()));
    connect(ui->pB_CriarPedido,SIGNAL(clicked()), this,SLOT(on_pB_Saida()));

}
