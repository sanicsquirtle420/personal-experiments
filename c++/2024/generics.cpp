#include <iostream>
#include <type_traits>
#include <string>

using namespace std ;

template <typename T> 
class Array {
    private:
        T* ptr ;
        int size ;
    public:
        Array(T arr[] , int s) {
            ptr = new T[s] ;
            size = s ;
            for(int i = 0 ; i < size ; i++) {
                ptr[i] = arr[i] ;
            }
        }
        void print() {
            for(int i = 0 ; i < size ; i++) {
                cout << *(ptr + i) << "  " ;
            }
            cout << endl ;
        }
        void remove(T arr[] , int i) {
            if(is_integral<int> :: value) {
                ptr[i] = 0 ;
            } 
        } /* TODO: learn how to determine what data type to assign blank values
             ex.) int/double = 0 , string/char = " " */
        void append(T arr[] , int s , T val) {
            size = s + 1 ;
            ptr = new T[size] ;
            for(int i = 0 ; i < s ; i++) {
                ptr[i] = arr[i] ;
            }
            ptr[s] = val ;
        }
} ;

int main() {
    int arr[5] = {4 , 28 , 6, 1 , 37} ;
    Array<int> a(arr , 5) ;
    cout << "Original array" << endl ;
    a.print() ;
    cout << "Appending to the array" << endl ;
    a.append(arr , 5 , 17) ;
    a.print() ;
    cout << "Deleting from the array" << endl ;
    a.remove(arr , 2) ;
    a.print() ;

    cout << "\nString array:" << endl ;
    string juno[] = {"Winston, we have a problem." , "Oh moons not again!" , "Scaredy cat?"} ;
    Array<string> b(juno , 3) ;
    b.append(juno , 3 , "but cats are the scariest of them all!") ;
    b.print() ;
    // b.remove(juno , 1) ;

    return 0 ;
}
