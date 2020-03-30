#ifndef ENTRADA_H
#define ENTRADA_H

#include <QDialog>

namespace Ui {
class Entrada;
}

class Entrada : public QDialog
{
    Q_OBJECT

public:
    explicit Entrada(QWidget *parent = 0);
    ~Entrada();

private slots:
    void on_pB_Volta();

private:
    Ui::Entrada *ui;
    void configuracaoInicial();
    void setConncts();
};

#endif // ENTRADA_H
