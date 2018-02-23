#ifndef TADOBJETO_H
#define TADOBJETO_H
#include <QString>

class TADObjeto
{
    int id;
    QString nombre;
public:
    TADObjeto();
    TADObjeto(int _id, QString _nombre);
    ~TADObjeto();

    int getId() const;
    void setId(int value);
    QString getNombre() const;
    void setNombre(const QString &value);

    int compare(TADObjeto *value);
    QString toString();
    QString getNodeName();
};

#endif // TADOBJETO_H
