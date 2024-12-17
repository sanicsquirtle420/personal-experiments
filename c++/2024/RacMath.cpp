#include <iostream>
#include "RacMath.h"

using namespace std ;

RacMath :: RacMath() {
}

void RacMath :: setFirst(int x) {
	a = x ;
}

void RacMath :: setSecond(int y) {
	b = y ;
}

int RacMath :: getFirst() {
	return a ;
}

int RacMath :: getSecond() {
	return b ;
}

int RacMath :: add() {
	cout << "Enter your first value: " ;
	cin >> a ;
	setFirst(a) ;
	cout << "Enter your second value: " ;
	cin >> b ;
	setSecond(b) ;

	return a + b ;
}

int RacMath :: subtract() {
	cout << "Enter your first value: " ;
	cin >> a ;
	setFirst(a) ;
	cout << "Enter your second value: " ;
	cin >> b ;
	setSecond(b) ;

	return a - b ;
}

int RacMath :: multiply() {
	cout << "Enter your first value: " ;
	cin >> a ;
	setFirst(a) ;
	cout << "Enter your second value: " ;
	cin >> b ;
	setSecond(b) ;

	return a * b ;
}

double RacMath :: divide() {
	cout << "Enter your first value: " ;
	cin >> a ;
	setFirst(a) ;
	cout << "Enter your second value: " ;
	cin >> b ;
	setSecond(b) ;

	return a / double(b) ;
}

int RacMath :: factorial(int x) {
	if(x == 0) {
		return 1 ;
	}

	return x * factorial(x - 1) ;
}
