#include "src/Queue.hpp"
#include <string>

using namespace std ;

int main(void) {
    Queue<int> pri ;
    Queue<int> reg ;
    bool stop = true ;

    cout << "Welcome to the Task Manager!" << endl ;
    while(stop){
        char option = ' ' ;
        cout << "Options:\np: Priority task , r: Regular task" << endl ;
        cout << "s: See tasks , e: Exit" << endl ;
        cin >> option ;

        if(option == 'p') {
            int a = 0 ;
            cout << "Enter the task " ;
            cin >> a ;
            pri.enqueue(a) ;
            cout << a << " added to priority!" << endl ;
        } 
        else if(option == 'r') {
            int a = 0 ;
            cout << "Enter the task " ;
            cin >> a ;
            reg.enqueue(a) ;
            cout << a << " added to regular!" << endl ;
        }
        else if(option == 's') {
            Queue<int> total ;
            cout << "Tasks:\n" << total.toString() << endl ;
        }
        else if(option == 'e') {
            stop = false ;
        } 
        else {
            cout << "INVALID OPTION!" << endl ;
        }
    }
    cout << "Have a great day!" << endl ;

    return 0 ;
}
