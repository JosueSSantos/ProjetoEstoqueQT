#ifndef CADASTROBASENEGOCIO_H
#define CADASTROBASENEGOCIO_H

#include <QObject>
#include "DOMINIO/filial.h"
#include"DOMINIO/produto.h"
#include "DOMINIO/usuario.h"

class cadastrobasenegocio : public QObject
{
    Q_OBJECT
public:
    explicit cadastrobasenegocio(QObject* parent = nullptr);
     QList<Filial*> buscarListFilial();
};

#endif // CADASTROBASENEGOCIO_H
