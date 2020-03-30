#ifndef CADASTROBANCODAO_H
#define CADASTROBANCODAO_H
#include "DOMINIO/filial.h"
#include <QObject>
class cadastrobancoDAo: public QObject
{
    Q_OBJECT
public:
    explicit cadastrobancoDAo(QObject * parent = nullptr);
    QList<Filial*> buscarInfoFilial();
};

#endif // CADASTROBANCODAO_H
