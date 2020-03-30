#ifndef PRODUTO_H
#define PRODUTO_H
#include <QObject>

class Produto: public QObject
{
    Q_OBJECT
public:
    explicit Produto (QObject * parent = nullptr);

    long long getIdProduto() const;
    void setIdProduto(long long value);

    QString getDescricao() const;
    void setDescricao(const QString &value);

private:
    long long idProduto;
    QString descricao;

};

#endif // PRODUTO_H
