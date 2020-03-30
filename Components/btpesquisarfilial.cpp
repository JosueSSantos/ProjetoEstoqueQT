#include "btpesquisarfilial.h"
#include "NEGOCIO/cadastrobasenegocio.h"
#include "ui_btpesquisarfilial.h"

btPesquisarFilial::btPesquisarFilial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::btPesquisarFilial)
{
    ui->setupUi(this);
    configuracaoInicail();
}

btPesquisarFilial::~btPesquisarFilial()
{
    delete ui;
}

void btPesquisarFilial::pB_Cancelar()
{

}

void btPesquisarFilial::pB_Concluir()
{

}

void btPesquisarFilial::montarTW()
{
    cadastrobasenegocio negocio;
    QList<Filial* > listFilial = negocio.buscarListFilial();

    int linha = 0;
    foreach (Filial* filial, listFilial) {
        ui->tWSelecaoFIlial->insertRow(linha);

        QTableWidgetItem* id = new QTableWidgetItem;
        id->setText(QString::number(filial->getIdFilial()));
        ui->tWSelecaoFIlial->setItem(linha,0, id);

        QTableWidgetItem* descricao = new QTableWidgetItem;
        descricao->setText(QString(filial->getDescFilial()));
        ui->tWSelecaoFIlial->setItem(linha,1, descricao);

        linha ++;
        ui->tWSelecaoFIlial->resizeColumnsToContents();
        ui->tWSelecaoFIlial->resizeRowsToContents();


    }


}

void btPesquisarFilial::configuracaoInicail()
{
    setConnects();
    montarTW();
}

void btPesquisarFilial::setConnects()
{
    connect(ui->pB_Cancelar,SIGNAL(clicked()),this,SLOT(pB_Cancelar()));
    connect(ui->pB_Concluir,SIGNAL(clicked()),this,SLOT(pB_Concluir()));

    connect(ui->tWSelecaoFIlial,SIGNAL(clicked()),this,SLOT(montarTW()));

}
