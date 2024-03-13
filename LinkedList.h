//
// Created by Joseph Garcia on 3/12/24.
//

#ifndef LINKED_LIST_IMPLEMENTATION_LINKEDLIST_H
#define LINKED_LIST_IMPLEMENTATION_LINKEDLIST_H
#include "Node.h"
#include <iostream>


template<typename T>
class LinkedList {
private:
    Node<T> * head = nullptr, * tail = nullptr;
    unsigned int listSize = 0;
    void addFirstNode(Node<T>*  node);// add node as the first node in the list
    Node<T> * createNode(const T& data); // return a new node with the passed in data;
    void push_front(Node<T> * node); /// Add node to the front of the list
    void push_back(Node<T> * node);

    Node<T> * search (const T& data); // Return first node with data, otherwise, return null pointer.
    void remove(Node<T> * node); // Delete the node from the list

public:
    LinkedList();
    void push_front(const T& item); // Create a new node with item, and pass the node to private push_front
    void push_back(const T& item); // Create a new node with item, and pass the node to private push_back
    void remove(const T& item);
    void pop_back();
    void pop_front();


    template<typename U> // Our friend is out of the scope, so we use a different typename
    friend std::ostream&  operator<<(std::ostream & out, const LinkedList<U> & list);

};

#include "LinkedList.cpp"
#endif //LINKED_LIST_IMPLEMENTATION_LINKEDLIST_H
