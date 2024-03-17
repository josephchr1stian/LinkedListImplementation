//
// Created by Joseph Garcia on 3/13/24.
//
#ifndef LINKED_LIST_IMPLEMENTATION_NODEITERATOR_CPP
#define LINKED_LIST_IMPLEMENTATION_NODEITERATOR_CPP
#include "NodeIterator.h"

template<typename T>
NodeIterator<T>::NodeIterator() =default;

template<typename T>
NodeIterator<T>::NodeIterator(Node<T> *current) {
     _current = current;

}

template<typename T>
NodeIterator<T> &NodeIterator<T>::operator++() {
    _current = _current->next;
    return this;
}

template<typename T>
NodeIterator<T> NodeIterator<T>::operator++(int) {
    if (_current->next != nullptr)
        _current = _current->next;
    return this;
}

template<typename T>
NodeIterator<T> &NodeIterator<T>::operator--() {
    _current = _current->prev;
    return this;
}

template<typename T>
NodeIterator<T> NodeIterator<T>::operator--(int) {
    if (_current->prev != nullptr)
        _current = _current->prev;
    return this;
}

template<typename T>
T &NodeIterator<T>::operator*() {
    return _current->data;
}

template<typename T>
bool operator==(const NodeIterator<T> & lhs, const NodeIterator<T>& rhs)
{
    return lhs._current = rhs._current;
}

template<typename T>
bool operator!=(const NodeIterator<T> & lhs, const NodeIterator<T>& rhs)
{
    return lhs._current != rhs._current;
}


#endif