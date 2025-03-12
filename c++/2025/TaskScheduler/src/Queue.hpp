#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "LinearNode.hpp"
#include "Exceptions.cpp"
#include <sstream>
#include <string>

using namespace std ;
template <typename T>

class Queue {
    private:
        int count ;
        LinearNode<T>* head ;
        LinearNode<T>* tail ;
    public:
        Queue() ;
        bool isEmpty() ;
        int size() ;
        void enqueue(T element) ;
        T dequeue() ;
        T first() ;
        string toString() ;
} ;

template <typename T>
Queue<T> :: Queue() : count(0) , head(nullptr) , tail(nullptr) {}

template <typename T>
bool Queue<T> :: isEmpty() {
    return count == 0 ;
}

template <typename T>
int Queue<T> :: size() {
    return count ;
}

template <typename T>
void Queue<T> :: enqueue(T element) {
    LinearNode<T>* node = new LinearNode(element) ;
    if(tail != nullptr) {
        tail -> setNext(node) ;
    }

    tail = node ;

    if(head == nullptr) {
        head = node ;
    }

    count++ ;
}

template <typename T>
T Queue<T> :: dequeue() {
    if(head == nullptr) {
        throw EmptyException("Queue is empty") ;
    }

    T element = head -> getElement() ;
    LinearNode<T>* tmp = head ;
    head = head -> getNext() ;

    if(head == nullptr) {
        tail == nullptr ;
    }

    delete tmp ;

    return result ;
}

template <typename T>
T Queue<T> :: first() {
    if(count == 0) {
        throw EmptyException("Queue is empty.") ;
    }

    return head -> getElement() ;
}

template <typename T>
string Queue<T> :: toString() {
    stringstream msg ;
    LinearNode<T>* current = head ;

    while(current != nullptr) {
        msg << current -> getElement() << "\n" ;
        current = current -> getNext() ;
    }

    return msg.str() ;
}

#endif
