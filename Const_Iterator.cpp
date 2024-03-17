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
Const_Iterator<T> &Const_Iterator<T>::operator++() {
    return _current->next;
}

template<typename T>
Const_Iterator<T>  Const_Iterator<T>::operator++(int) {
    return _current->prev;
}

template<typename T>
Const_Iterator<T>  &Const_Iterator<T>::operator--() {
    return _current->prev;
}

template<typename T>
Const_Iterator<T>  Const_Iterator<T>::operator--(int) {
    return _current->prev;
}

template<typename T>
T &Const_Iterator<T>::operator*() {
    return _current->data;
}

#endif

