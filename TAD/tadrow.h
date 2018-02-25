#ifndef TADROW_H
#define TADROW_H
#include <QString>

class TADRow
{
    int row;
public:
    TADRow();
    TADRow(int _row);
    ~TADRow();

    int getRow();
    void setRow(int _row);
    int compare(TADRow *value);

    QString getNodeName();
    QString toString();
};

#endif // TADROW_H
