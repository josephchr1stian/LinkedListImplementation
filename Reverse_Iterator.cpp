//
// Created by Joseph Garcia on 3/14/24.
//

#ifndef LINKED_LIST_IMPLEMENTATION_REVERSE_ITERATOR_CPP
#define LINKED_LIST_IMPLEMENTATION_REVERSE_ITERATOR_CPP
#include "Reverse_Iterator.h"


template<typename T>
Reverse_Iterator<T>::Reverse_Iterator() = default;

template<typename T>
Reverse_Iterator<T>::Reverse_Iterator(Node<T> *current) {
    _current = current;

}

template<typename T>
Reverse_Iterator &Reverse_Iterator<T>::operator++() {
    return _current->next;
}

template<typename T>
Reverse_Iterator Reverse_Iterator<T>::operator++(int) {
    return Reverse_Iterator();
}

template<typename T>
Reverse_Iterator &Reverse_Iterator<T>::operator--() {
    return <#initializer#>;
}

template<typename T>
Reverse_Iterator Reverse_Iterator<T>::operator--(int) {
    return Reverse_Iterator();
}

template<typename T>
T &Reverse_Iterator<T>::operator*() {
    return <#initializer#>;
}

#endif