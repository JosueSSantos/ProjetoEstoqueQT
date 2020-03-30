#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "saida.h"
#include "entrada.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pBSaidas_clicked();

    void on_pBEntradas_clicked();

private:
    Ui::MainWindow *ui;
    void configuracaoInicial();
    void setConnects();

};

#endif // MAINWINDOW_H
