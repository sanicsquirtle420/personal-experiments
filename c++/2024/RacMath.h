#ifndef RACMATH_H
#define RACMATH_H

class RacMath {
	public:
		RacMath() ; // Constructor
		void setFirst(int x) ;
		void setSecond(int y) ;
		int getFirst() ;
		int getSecond() ;
		int add() ;
		int subtract() ;
		int multiply() ;
		double divide() ;
		int factorial(int x) ;

	private:
		int a , b ;
} ;

#endif
