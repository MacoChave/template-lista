#ifndef TADPERRO_H
#define TADPERRO_H
#include <QString>

class TADPerro
{
    QString raza;
    QString color;
    QString nombre;
public:
    TADPerro();
    TADPerro(QString _raza, QString _color, QString _nombre);
    ~TADPerro();

    QString getRaza() const;
    void setRaza(const QString &value);
    QString getColor() const;
    void setColor(const QString &value);
    QString getNombre() const;
    void setNombre(const QString &value);

    int compare(TADPerro *value);
    QString getNodeName();
    QString toString();
};

#endif // TADPERRO_H
