#include "formadepagamento.h"
#include "ui_formadepagamento.h"

FormaDePagamento::FormaDePagamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormaDePagamento)
{
    ui->setupUi(this);
}

FormaDePagamento::~FormaDePagamento()
{
    delete ui;
}
