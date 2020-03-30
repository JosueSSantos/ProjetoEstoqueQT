#include "itempedido.h"
#include "ui_itempedido.h"
#include "saida.h"
#include "qdebug.h"
#include "formadepagamento.h"

ItemPedido::ItemPedido(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemPedido)
{
    ui->setupUi(this);
    configuracaoInicial();
}

ItemPedido::~ItemPedido()
{
    delete ui;
}

void ItemPedido::on_pushButton_clicked()
{
    FormaDePagamento objFormaPgmto;
    objFormaPgmto.exec();
}

void ItemPedido::pB_Entrada()
{
    ui->stItemPedido->setCurrentIndex(0);
    qDebug()<< "Debug";

}

void ItemPedido::pB_Saida()
{
    ui->stItemPedido->setCurrentIndex(1);
    qDebug() << "Pb saida";


}

void ItemPedido::pB_PesqIdProduto()
{

}

void ItemPedido::pB_PesqCodigo()
{

}

void ItemPedido::pB_PesqDesc()
{

}
void ItemPedido::on_PbRemover()
{
 ui->lE_IdPRoduto->clear();
 ui->lE_codBarras->clear();
 ui->lE_descricao->clear();
}

void ItemPedido::on_pBFormadePagamento()
{
    qDebug() << "GOOGLE";
    FormaDePagamento*  forma = new FormaDePagamento;
    forma->show();

}

void ItemPedido::configuracaoInicial()
{
    setConnects();
    Saida* saida = new Saida;
    ui->stItemPedido->addWidget(saida);

}

void ItemPedido::setConnects()
{
    connect(ui->pB_PesqIdProdt,SIGNAL(clicked()),this,SLOT(pB_PesqIdProduto()));

    connect(ui->pB_PesqCodigo,SIGNAL(clicked()),this,SLOT(pB_PesqCodigo()));

    connect(ui->pB_PesqDescr,SIGNAL(clicked()),this,SLOT(pB_PesqDesc()));

    connect(ui->PbRemover,SIGNAL(clicked()), this,SLOT(on_PbRemover()));

    connect(ui->pBFormadPagamento,SIGNAL(clicked()),this,SLOT(on_pBFormadePagamento()));
}

