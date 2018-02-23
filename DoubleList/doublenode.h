#ifndef DOUBLENODE_H
#define DOUBLENODE_H
#include <QString>

template <typename T>
class DoubleNode
{
    T data;
    DoubleNode<T> *next;
    DoubleNode<T> *preview;
public:
    DoubleNode();
    DoubleNode(T value);
    ~DoubleNode();
    T getData();
    void setData(T value);
    DoubleNode<T> *getNext();
    void setNext(DoubleNode<T> *value);
    DoubleNode<T> *getPreview();
    void setPreview(DoubleNode<T> *value);

    QString getNameNode();
    QString getTextNode();
};

#endif // DOUBLENODE_H

template <typename T>
DoubleNode<T>::DoubleNode()
{
    data = 0;
    next = 0;
    preview = 0;
}

template <typename T>
DoubleNode<T>::DoubleNode(T value)
{
    data = value;
    next = 0;
    preview = 0;
}

template <typename T>
DoubleNode<T>::~DoubleNode()
{
    if (data != 0)
        delete data;
    data = 0;
    next = 0;
    preview = 0;
}

template <typename T>
T DoubleNode<T>::getData()
{
    return data;
}

template <typename T>
void DoubleNode<T>::setData(T value)
{
    data = value;
}

template <typename T>
DoubleNode<T> *DoubleNode<T>::getNext()
{
    return next;
}

template <typename T>
void DoubleNode<T>::setNext(DoubleNode<T> *value)
{
    next = value;
}

template <typename T>
DoubleNode<T> *DoubleNode<T>::getPreview()
{
    return preview;
}

template <typename T>
void DoubleNode<T>::setPreview(DoubleNode<T> *value)
{
    preview = value;
}

template <typename T>
QString DoubleNode<T>::getNameNode()
{
    return data->getNodeName();
}

template <typename T>
QString DoubleNode<T>::getTextNode()
{
    return data->toString();
}
