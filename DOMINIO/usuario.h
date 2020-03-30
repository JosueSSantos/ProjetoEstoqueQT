#ifndef USUARIO_H
#define USUARIO_H
#include <QObject>

class Usuario: public QObject
{
     Q_OBJECT
public:
    explicit Usuario(QObject* parent = nullptr);

    long long getIdUsuario() const;
    void setIdUsuario(long long value);

    QString getNomeUsuario() const;
    void setNomeUsuario(const QString &value);

private:
    long long idUsuario;
    QString nomeUsuario;
};

#endif // USUARIO_H
