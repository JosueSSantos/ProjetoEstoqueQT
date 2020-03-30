#ifndef BTPESQUISARFILIAL_H
#define BTPESQUISARFILIAL_H

#include <QWidget>
#include <QTableWidgetItem>

namespace Ui {
class btPesquisarFilial;
}

class btPesquisarFilial : public QWidget
{
    Q_OBJECT

public:
    explicit btPesquisarFilial(QWidget *parent = nullptr);
    ~btPesquisarFilial();
private slots:
void pB_Cancelar();
void pB_Concluir();
void montarTW();


private:
    Ui::btPesquisarFilial *ui;
    void configuracaoInicail();
    void setConnects();
};

#endif // BTPESQUISARFILIAL_H
