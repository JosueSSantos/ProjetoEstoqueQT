#include "cadastrobasenegocio.h"
#include "DAO/cadastrobancodao.h"

cadastrobasenegocio::cadastrobasenegocio(QObject *parent) : QObject(parent)
{

}

QList<Filial *> cadastrobasenegocio::buscarListFilial()
{
    cadastrobancoDAo cadastrobase;
    QList<Filial*> filial = cadastrobase.buscarInfoFilial();

    return filial;
}
