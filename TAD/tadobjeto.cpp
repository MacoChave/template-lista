#include "tadobjeto.h"

int TADObjeto::getId() const
{
    return id;
}

void TADObjeto::setId(int value)
{
    id = value;
}

QString TADObjeto::getNombre() const
{
    return nombre;
}

void TADObjeto::setNombre(const QString &value)
{
    nombre = value;
}

int TADObjeto::compare(TADObjeto *value)
{
    if (id < value->getId())
        return -1;
    else if (id > value->getId())
        return 1;
    else
        return 0;
}

QString TADObjeto::toString()
{
    QString text(nombre);

    return text;
}

QString TADObjeto::getNodeName()
{
    QString name("node");
    name.append(nombre);
    name.remove(" ");

    return name;
}

TADObjeto::TADObjeto()
{
    id = 0;
    nombre = "";
}

TADObjeto::TADObjeto(int _id, QString _nombre)
{
    id = _id;
    nombre = _nombre;
}

TADObjeto::~TADObjeto()
{
    id = 0;
    nombre.clear();
}
