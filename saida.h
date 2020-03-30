#ifndef SAIDA_H
#define SAIDA_H

#include <QDialog>
#include "itempedido.h"

namespace Ui {
class Saida;
}

class Saida : public QDialog
{
    Q_OBJECT

public:
    explicit Saida(QWidget *parent = 0);
    ~Saida();

private slots:
    void on_pB_Saida();

    void on_pB_searchFilial_clicked();

private:
    Ui::Saida *ui;
    void configuracaoInicial();
    void setConnects() ;
};

#endif // SAIDA_H
