#include "cadastrobancodao.h"
#include <QtSql/QSql>
cadastrobancoDAo::cadastrobancoDAo(QObject* parent ) : QObject(parent)
{

}

QList<Filial *> cadastrobancoDAo::buscarInfoFilial()
{
    //    QString sql = " select estoque.testeestoque.filial.id_filial, descricao_filial, estoque.testeestoque.filial.descricao_filial from estoque.testeestoque.filial" ;
//    QSqlQuery query;
//    query.prepare(sql);

//    QList<Filial*> listfilial;

//    if(!query.exec())
//        qDebug() << "Query filial ERRO" << query.lastError().text();
//    while(query.next()){

//        Filial* filial = new Filial;
//        filial->setIdFilial(query.value("id_filial").toLongLong());
//        filial->setDescricao(query.value("descricao_filial").toString());

//        listfilial << filial;
//    }

//    return listfilial;
}
