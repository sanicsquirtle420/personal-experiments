#include "LinearNode.hpp"
#include <iostream>

using namespace std ;

template <typename T>
LinearNode<T> :: LinearNode(T elem) {
    T element = elem ;
    LinearNode<T>* next = NULL ;
}

template <typename T>
T LinearNode<T> :: getElement() {
    return element ;
}

template <typename T>
LinearNode<T>* LinearNode<T> :: getNext() {
    return next ;
}

template <typename T>
void LinearNode<T> :: setNext(LinearNode<T>* node) {
    next = node ;
}
