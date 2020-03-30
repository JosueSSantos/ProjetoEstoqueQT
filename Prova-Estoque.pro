#-------------------------------------------------
#
# Project created by QtCreator 2020-03-27T20:03:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Prova-Estoque
TEMPLATE = app


SOURCES += main.cpp\
    Components/btpesquisarfilial.cpp \
    DAO/banco.cpp \
    DAO/cadastrobancodao.cpp \
    DOMINIO/estoque.cpp \
    DOMINIO/filial.cpp \
    DOMINIO/produto.cpp \
    DOMINIO/usuario.cpp \
    NEGOCIO/cadastrobasenegocio.cpp \
        mainwindow.cpp \
    saida.cpp \
    itempedido.cpp \
    formadepagamento.cpp \
    entrada.cpp

HEADERS  += mainwindow.h \
    Components/btpesquisarfilial.h \
    DAO/banco.h \
    DAO/cadastrobancodao.h \
    DOMINIO/estoque.h \
    DOMINIO/filial.h \
    DOMINIO/produto.h \
    DOMINIO/usuario.h \
    NEGOCIO/cadastrobasenegocio.h \
    saida.h \
    itempedido.h \
    formadepagamento.h \
    entrada.h

FORMS    += mainwindow.ui \
    Components/btpesquisarfilial.ui \
    saida.ui \
    itempedido.ui \
    formadepagamento.ui \
    entrada.ui
