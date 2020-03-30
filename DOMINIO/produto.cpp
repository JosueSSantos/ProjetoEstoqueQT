#include "produto.h"

Produto::Produto(QObject *parent) : QObject(parent)
{

}

long long Produto::getIdProduto() const
{
    return idProduto;
}

void Produto::setIdProduto(long long value)
{
    idProduto = value;
}

QString Produto::getDescricao() const
{
    return descricao;
}

void Produto::setDescricao(const QString &value)
{
    descricao = value;
}
