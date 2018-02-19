#ifndef DOUBLENODE_H
#define DOUBLENODE_H

template <typename T>
class DoubleNode
{
    T data;
    DoubleNode<T> * next;
    DoubleNode<T> * preview;
public:
    DoubleNode();
    DoubleNode(T value);
    ~DoubleNode();

    T getData();
    void setData(T value);
    DoubleNode<T> * getNext();
    void setNext(DoubleNode<T> * value);
    DoubleNode<T> * getPreview();
    void setPreview(DoubleNode<T> * value);
};

#endif // DOUBLENODE_H

template <class T>
DoubleNode<T>::DoubleNode()
{
    data = 0;
    next = 0;
    preview = 0;
}

template <class T>
DoubleNode<T>::DoubleNode(T value)
{
    data = value;
    next = 0;
    preview = 0;
}

template <class T>
DoubleNode<T>::~DoubleNode()
{
    if (data != 0)
        data = 0;
    data = 0;
    next = 0;
    preview = 0;
}

template <class T>
T DoubleNode<T>::getData()
{
    return data;
}

template <class T>
void DoubleNode<T>::setData(T value)
{
    data = value;
}

template <class T>
DoubleNode<T> *DoubleNode<T>::getNext()
{
    return next;
}

template <class T>
void DoubleNode<T>::setNext(DoubleNode<T> *value)
{
    next = value;
}

template <class T>
DoubleNode<T> *DoubleNode<T>::getPreview()
{
    return preview;
}

template <class T>
void DoubleNode<T>::setPreview(DoubleNode<T> *value)
{
    preview = value;
}
