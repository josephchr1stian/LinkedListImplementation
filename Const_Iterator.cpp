//
// Created by Joseph Garcia on 3/14/24.
//
#ifndef LINKED_LIST_IMPLEMENTATION_CONST_ITERATOR_CPP
#define LINKED_LIST_IMPLEMENTATION_CONST_ITERATOR_CPP
#include "Const_Iterator.h"

template<typename T>
Const_Iterator<T>::Const_Iterator() = default;

template<typename T>
Const_Iterator<T>::Const_Iterator(Node<T> *current) {
    _current = current;
}

template<typename T>
const Const_Iterator<T> &Const_Iterator<T>::operator++() {
    _current = _current->next;
    return this;
}

template<typename T>
const Const_Iterator<T>  Const_Iterator<T>::operator++(int) {
   _current = _current->next;
    return this;
}

template<typename T>
const Const_Iterator<T>  &Const_Iterator<T>::operator--() {

    _current = _current->prev;
    return this;
}

template<typename T>
const Const_Iterator<T>  Const_Iterator<T>::operator--(int) {
    _current = _current->prev;
    return this;

}

template<typename T>
const T &Const_Iterator<T>::operator*() {
    return _current->data;
}

template<typename T>
bool operator==(const Const_Iterator<T> & lhs, const Const_Iterator<T>& rhs)
{
    return lhs._current = rhs._current;
}

template<typename T>
bool operator!=(const Const_Iterator<T> & lhs, const Const_Iterator<T>& rhs)
{
    return lhs._current != rhs._current;
}

#endif

