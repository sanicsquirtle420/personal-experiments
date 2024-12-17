#include <iostream>
#include "RacMath.h"

using namespace std;

int main() {
    int num1 ;
    float ans ;
    char opp , response ;
    RacMath math ;

    cout << "--- C++ Calculator ---" << endl ;
    do {
    	cout << "Choose your opperation [+ , - , * , / , !]: " ;
    	cin >> opp ;

    	switch(opp){
		case '+':
			ans = math.add() ;
			break ;
        	case '-':
            	ans = math.subtract() ;
            	break ;
        	case '*':
            	ans = math.multiply() ;
            	break ;
        	case '/':
        		ans = math.divide() ;
        		break ;
		case '!':
	    	cout << "Enter a number: " ;
	    	cin >> num1 ;

	    	ans = math.factorial(num1) ;
	    	math.setSecond(0) ;
	    	math.setFirst(num1) ; 
	    	break ;
		default:
	    	cout << "Invalid opperation" << endl ;
	    	return 0 ;
    }

    cout.precision(5) ;
    cout << math.getFirst() << " " << opp << " " <<  math.getSecond() << " = " << ans << endl ;
    cout << "Would you like to continue (y/n)? " ;
    cin >> response ;
    } while(response != 'n') ;

    return 0 ;
} 
