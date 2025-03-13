#include "src/Queue.hpp"

using namespace std ;

int main(void) {
    Queue<string> pri ;
    Queue<string> reg ;
    bool stop = true ;

    cout << "Welcome to the Task Manager!" << endl ;
    while(stop){
        char option = ' ' ;
        cout << "Options:\n1: Add tasks , 2: Remove tasks , 3: See tasks , 0: Exit" << endl ;
        cin >> option ;

        if(option == '1') {
            option = ' ' ;
            cout << "\tOptions: p: Priority , r: Regular" << endl ;
            cout << "\tAdding to... " ;
            cin >> option ;

            if(option == 'p') {
                char input[100] ; // character limit: 100
                cout << "\tEnter the task: " ;
                cin.clear() ; // clearing the buffer
                cin.ignore(10000 , '\n') ;
                cin.getline(input , sizeof(input)) ; // accepts spaces
                pri.enqueue(input) ;
                cout << "\"" << input << "\" added to priority!" << endl ;
            } else { 
                // defaults to regular queue
                char input[100] ; 
                cout << "\tEnter the task: " ;
                cin.clear() ; 
                cin.ignore(10000 , '\n') ;
                cin.getline(input , sizeof(input)) ;
                reg.enqueue(input) ;
                cout << "\"" << input << "\" added to regular!" << endl ;
            }
        } 
        else if(option == '2') {
            option = ' ' ;
            cout << "\tOptions: p: Priority , r: Regular" << endl ;
            cout << "\tRemoving from... " ;
            cin >> option ;

            if(option == 'p') {
                cout << "\"" << pri.dequeue() << "\" was removed from priority." << endl ;
            } else { 
                // defaults to regular queue
                cout << "\"" << reg.dequeue() << "\" was removed from priority." << endl ;
            }
        }
        else if(option == '3') {
            option = ' ' ;
            cout << "\tOptions: p: Priority , r: Regular , a: All" << endl ;
            cout << "\tLooking at... " ;
            cin >> option ;

            if(option == 'p') {
                cout << "[!!!] Priority tasks:\n" << pri.toString() << endl ;
            } 
            else if(option == 'r'){
                cout << "Regular tasks:\n" << reg.toString() << endl ;
            } else { 
                // default will display all tasks
                Queue<string> total = pri.merge(reg);
                cout << "ALL Tasks:\n" << total.toString() << endl ;
            }
            
        }
        else if(option == '0') {
            stop = false ;
        } 
        else {
            cout << "INVALID OPTION!" << endl ;
        }
    }
    cout << "Have a great day!" << endl ;

    return 0 ;
}
