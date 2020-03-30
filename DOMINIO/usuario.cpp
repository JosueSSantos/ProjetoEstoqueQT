#include "usuario.h"

Usuario::Usuario(QObject *parent) : QObject(parent)
{

}

long long Usuario::getIdUsuario() const
{
    return idUsuario;
}

void Usuario::setIdUsuario(long long value)
{
    idUsuario = value;
}

QString Usuario::getNomeUsuario() const
{
    return nomeUsuario;
}

void Usuario::setNomeUsuario(const QString &value)
{
    nomeUsuario = value;
}
