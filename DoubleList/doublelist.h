#ifndef DOUBLELIST_H
#define DOUBLELIST_H
#include "doublenode.h"

template <typename T>
class DoubleList
{
    int count;
    DoubleNode<T> * first;
    DoubleNode<T> * last;
public:
    DoubleList();
    ~DoubleList();

    T front();
    T back();
    void push_front(T data);
    void push_back(T data);
    void pop_front();
    void pop_back();
    void clear();
};

#endif // DOUBLELIST_H

template <class T>
DoubleList<T>::DoubleList()
{
    count = 0;
    first = 0;
    last = 0;
}

template <class T>
DoubleList<T>::~DoubleList()
{
    count = 0;
    clear();
}

template <class T>
T DoubleList<T>::front()
{
    return first;
}

template <class T>
T DoubleList<T>::back()
{
    return last;
}

template <class T>
void DoubleList<T>::push_front(T data)
{
    DoubleNode<T> * node = new DoubleNode<T>(data);

    if (count == 0)
        first = last = node;
    else
    {
        node->setNext(first);
        first->setPreview(node);
        first = node;
    }
    count++;
}

template <class T>
void DoubleList<T>::push_back(T data)
{
    DoubleNode<T> * node = new DoubleNode<T>(data);

    if (count == 0)
        first = last = node;
    else
    {
        last->setNext(node);
        node->setPreview(last);
        last = node;
    }
    count++;
}

template <class T>
void DoubleList<T>::pop_front()
{
    DoubleNode<T> * temporal = first;

    first = temporal->getNext();
    first->setPreview(0);

    delete temporal;
    temporal = 0;
    count--;
}

template <class T>
void DoubleList<T>::pop_back()
{
    DoubleNode<T> * temporal = last;

    last = temporal->getPreview();
    last->setNext(0);

    delete temporal;
    temporal = 0;
    count--;
}

template <class T>
void DoubleList<T>::clear()
{
    DoubleNode<T> * temporal = first;

    for (int i = 0; i < count; i++)
    {
        first = temporal->getNext();
        delete temporal;
        temporal = first;
    }
}
