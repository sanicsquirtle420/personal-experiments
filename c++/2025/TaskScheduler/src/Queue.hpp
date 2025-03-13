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
        void setHead(LinearNode<T>* h) ;
        void setTail(LinearNode<T>* t) ;
        LinearNode<T>* getHead() ;
        LinearNode<T>* getTail() ;
        Queue<T> merge(Queue<T> &two) ;
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
    head = head -> getNext() ;

    if(head == nullptr) {
        tail == nullptr ;
    }

    return element ;
}

template <typename T>
T Queue<T> :: first() {
    if(count == 0) {
        throw EmptyException("Queue is empty.") ;
    }

    return head -> getElement() ;
}

template <typename T>
void Queue<T> :: setHead(LinearNode<T>* h) {
    head = h ;
}

template <typename T>
void Queue<T> :: setTail(LinearNode<T>* t) {
    tail = t ;
}

template <typename T>
LinearNode<T>* Queue<T> :: getHead() {
    return head ;
}

template <typename T>
LinearNode<T>* Queue<T> :: getTail() {
    return tail ;
}

template <typename T>
Queue<T> Queue<T> :: merge(Queue<T> &other) {
    Queue<T> tmp ;
    if(!head) {
        // Current is empty
        tmp.setHead(other.getHead()) ;
        tmp.setTail(other.getTail()) ;
    }
    if(!other.head) {
        // Other is empty
        tmp.setHead(head) ;
        tmp.setTail(tail) ;
    }
    else if(head && other.head){
        // Both have values
        LinearNode<T>* curr = head ;
        while(curr != nullptr) {
            // ensures that Current doesn't change
            tmp.enqueue(curr -> getElement()) ;
            curr = curr -> getNext() ;
        }

        tmp.tail -> setNext(other.head) ;
        tmp.setTail(other.tail) ;
    }

    return tmp ;
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
