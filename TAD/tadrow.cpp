#include "tadrow.h"

TADRow::TADRow()
{
    row = 0;
}

TADRow::TADRow(int _row)
{
    row = _row;
}

TADRow::~TADRow()
{
    row = 0;
}

int TADRow::getRow()
{
    return row;
}

void TADRow::setRow(int _row)
{
    row = _row;
}

int TADRow::compare(TADRow *value)
{
    if (row > value->getRow())
        return 1;
    if (row < value->getRow())
        return -1;

    return 0;
}

QString TADRow::getNodeName()
{
    QString name("node");
    name.append(QString::number(row));

    return name;
}

QString TADRow::toString()
{
    QString text("Fila\\n");
    text.append(QString::number(row));

    return text;
}
