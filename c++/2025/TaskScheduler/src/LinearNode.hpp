#ifndef LINEARNODE_HPP
#define LINEARNODE_HPP

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

#endif
