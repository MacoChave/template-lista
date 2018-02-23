#include "tadperro.h"

QString TADPerro::getRaza() const
{
    return raza;
}

void TADPerro::setRaza(const QString &value)
{
    raza = value;
}

QString TADPerro::getColor() const
{
    return color;
}

void TADPerro::setColor(const QString &value)
{
    color = value;
}

QString TADPerro::getNombre() const
{
    return nombre;
}

void TADPerro::setNombre(const QString &value)
{
    nombre = value;
}

int TADPerro::compare(TADPerro *value)
{
    return raza.compare(value->getRaza());
}

QString TADPerro::getNodeName()
{
    QString name("node");
    name.append(nombre);
    name.remove(" ");

    return name;
}

QString TADPerro::toString()
{
    QString text(raza);
    text.append("\\n");
    text.append(nombre);

    return text;
}

TADPerro::TADPerro()
{
}

TADPerro::TADPerro(QString _raza, QString _color, QString _nombre)
{
    raza = _raza;
    color = _color;
    nombre = _nombre;
}

TADPerro::~TADPerro()
{
    raza.clear();
    color.clear();
    nombre.clear();
}
