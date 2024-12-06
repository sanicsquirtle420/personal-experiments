#include <iostream>

using namespace std;

int add(int a , int b) ;
int sub(int a , int b) ;
int mul(int a , int b) ;
float div(int a , float b) ;

int main() {
    int num1 , num2 ;
    float ans ;
    char opp ;

    cout << "Choose your opperation [+ , - , * , /]: " ;
    cin >> opp ;
    
    if(opp != '+' && opp != '-' && opp != '*' && opp != '/') {
	    cout << "Invalid opperation.\n" ;
	    return 1 ;
    }

    cout << "Enter your first value: " ;
    cin >> num1 ;
    cout << "Enter your second value: " ;
    cin >> num2 ;

    switch(opp){
        case '+':
            ans = add(num1 , num2) ;
            break ;
        case '-':
            ans = sub(num1 , num2) ;
            break ;
        case '*':
            ans = mul(num1 , num2) ;
            break ;
        case '/':
	        ans = div(num1 , (float) num2) ;
	        break ;
    }

    cout.precision(3) ;
    cout << num1 << opp << num2 << "=" << ans  << "\n" ;
    /* I hate this so much just let me format a string
       I tried format() but it looks ugly and didn't work which 
       I know is a skill issue on my part */
    return 0 ;
} 

int add(int a , int b) {
	return a + b ;
}

int sub(int a , int b) {
	return a - b ;
}

int mul(int a , int b) {
	return a * b ;
}

float div(int a , float b) {
	return a / b ;
}
