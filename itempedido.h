#ifndef ITEMPEDIDO_H
#define ITEMPEDIDO_H

#include <QDialog>
#include "formadepagamento.h"

namespace Ui {
class ItemPedido;
}

class ItemPedido : public QDialog
{
    Q_OBJECT

public:
    explicit ItemPedido(QWidget *parent = 0);
    ~ItemPedido();

private slots:
    void on_pushButton_clicked();
    void pB_Entrada();
    void pB_Saida();
    void pB_PesqIdProduto();
    void pB_PesqCodigo();
    void pB_PesqDesc ();
    void on_PbRemover();
    void on_pBFormadePagamento();

private:
    Ui::ItemPedido *ui;
    void configuracaoInicial();
    void setConnects();
};

#endif // ITEMPEDIDO_H
