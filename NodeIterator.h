//
// Created by Joseph Garcia on 3/13/24.
//

#ifndef LINKED_LIST_IMPLEMENTATION_NODEITERATOR_H
#define LINKED_LIST_IMPLEMENTATION_NODEITERATOR_H
#include "Node.h"
template <typename T>
class NodeIterator
{
private:
    Node<T> * _current;
public:
    NodeIterator();
    NodeIterator(Node<T> * current);


    // ++ prefix
    NodeIterator& operator++();

    //++Postfix
    NodeIterator operator++(int);

    // -- prefix
    NodeIterator& operator--();

    //--Postfix
    NodeIterator operator--(int);

    //dereference, member function that will change the object
    T& operator*();



};


#endif //LINKED_LIST_IMPLEMENTATION_NODEITERATOR_H
