/*  07/19/24 
Trying to learn C++, so I am trying to make a simple
CLI calculator. As I was looking into C++ code, I didn't
realize how similar C++ is to Java.  */

#include <iostream>
using namespace std;

int main() {
    int num1 , num2 ;
    float ans ;
    char opp ;

    cout << "Choose your opperation [+ , - , * , /]: " ;
    cin >> opp ;

    cout << "Enter your first value: " ;
    cin >> num1 ;
    cout << "Enter your second value: " ;
    cin >> num2 ;

    switch(opp){
        case '+':
            ans = num1 + num2 ;
            break ;
        case '-':
            ans = num1 - num2 ;
            break ;
        case '*':
            ans = num1 * num2 ;
            break ;
        case '/':
        ans = num1 / (float)num2 ;
        break ;
    }

    cout.precision(3) ;
    cout << num1 << opp << num2 << "=" << ans << "\n" ;
  
    return 0 ;
} 
