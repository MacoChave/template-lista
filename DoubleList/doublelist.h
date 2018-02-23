#ifndef DOUBLELIST_H
#define DOUBLELIST_H
#include <QFile>
#include <QTextStream>
#include "doublenode.h"

template <typename T>
class DoubleList
{
    int count;
    DoubleNode<T> *first;
    DoubleNode<T> *last;
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
    void graph(QString filename);
};

#endif // DOUBLELIST_H

template <typename T>
DoubleList<T>::DoubleList()
{
    count = 0;
    first = 0;
    last = 0;
}

template <typename T>
DoubleList<T>::~DoubleList()
{
    count = 0;
    clear();
}

template <typename T>
T DoubleList<T>::front()
{
    return first;
}

template <typename T>
T DoubleList<T>::back()
{
    return last;
}

template <typename T>
void DoubleList<T>::push_front(T data)
{
    DoubleNode<T> *node = new DoubleNode<T>(data);

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

template <typename T>
void DoubleList<T>::push_back(T data)
{
    DoubleNode<T> *node = new DoubleNode<T>(data);

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

template <typename T>
void DoubleList<T>::pop_front()
{
    DoubleNode<T> *temporal = first;

    first = temporal->getNext();
    first->setPreview(0);

    delete temporal;
    temporal = 0;
    count--;
}

template <typename T>
void DoubleList<T>::pop_back()
{
    DoubleNode<T> *temporal = last;

    last = temporal->getPreview();
    last->setNext(0);

    delete temporal;
    temporal = 0;
    count--;
}

template <typename T>
void DoubleList<T>::clear()
{
    DoubleNode<T> *temporal = first;

    for (int i = 0; i < count; i++)
    {
        first = temporal->getNext();
        delete temporal;
        temporal = first;
    }
}

template <typename T>
void DoubleList<T>::graph(QString filename)
{
    QFile file(filename + ".dot");

    if (file.open(QFile::WriteOnly | QFile::Text))
    {
        DoubleNode<T> *temporal = first;
        QTextStream out(&file);
        out << "digraph " + filename + " {\n";
        out << "\trankdir = LR;\n";
        //out << "\tnode [shape = \"box\"]\n";
        flush(out);

        while (temporal != NULL)
        {
            out << "\t" << temporal->getNameNode();
            out << " [label = \"" << temporal->getTextNode() << "\"];\n";
            flush(out);

            if (temporal->getPreview() != NULL)
            {
                out << "\t" << temporal->getNameNode();
                out << " -> " << temporal->getPreview()->getNameNode() << ";\n";
                flush(out);
            }

            if (temporal->getNext() != NULL)
            {
                out << "\t" << temporal->getNameNode();
                out << " -> " << temporal->getNext()->getNameNode() << ";\n";
                flush(out);
            }

            temporal = temporal->getNext();
        }
        out << "}";
        flush(out);

        file.close();
        QString cmd("dot -Tpng ");
        cmd.append(filename + ".dot ");
        cmd.append("-o " + filename + ".png");
        system(cmd.toLatin1().data());
    }
}
