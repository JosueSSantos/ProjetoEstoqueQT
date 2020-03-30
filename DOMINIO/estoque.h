#ifndef ESTOQUE_H
#define ESTOQUE_H
#include "DOMINIO/filial.h"
#include "DOMINIO/produto.h"
#include <QObject>
class Estoque: public QObject
{
    Q_OBJECT
public:
    explicit Estoque(QObject* parent = nullptr);

    double getBase() const;
    void setBase(double value);

    Produto *getProduto() const;
    void setProduto(Produto *value);

    Filial *getFilial() const;
    void setFilial(Filial *value);

private:
    Filial* filial;
    Produto * produto;
    double base;
};

#endif // ESTOQUE_H
