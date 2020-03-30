#ifndef FORMADEPAGAMENTO_H
#define FORMADEPAGAMENTO_H

#include <QDialog>

namespace Ui {
class FormaDePagamento;
}

class FormaDePagamento : public QDialog
{
    Q_OBJECT

public:
    explicit FormaDePagamento(QWidget *parent = 0);
    ~FormaDePagamento();

private:
    Ui::FormaDePagamento *ui;
};

#endif // FORMADEPAGAMENTO_H
