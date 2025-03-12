#ifndef LINEARNODE_HPP
#define LINEARNODE_HPP
#include <iostream>

using namespace std ;
template <typename T>

class LinearNode {
    private:
        T element ;
        LinearNode<T>* next ;
    public:
        LinearNode(T element) ;
        T getElement() ;
        LinearNode<T>* getNext() ;
        void setNext(LinearNode<T>* node) ;
} ;

template <typename T>
LinearNode<T> :: LinearNode(T elem) : element(elem) , next(nullptr) {}

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

#endif
