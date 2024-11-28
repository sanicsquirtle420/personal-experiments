#include <iostream>

using namespace std ;

class Circle {
	private:
		double radius ;

	public:
		Circle() {
			radius = 0.0 ;
		}

		Circle(double r) {
			radius = r ;
		}

		void setRadius(double r) { // setter
			radius = r ;
		}

		double getRadius() {
			return radius ;
		}

		double getArea() {
			return radius * radius * 3.14159 ;
		}

		double getDiameter() {
			return 2 * radius ;
		}

		double getCircumference() {
			return 2 * radius * 3.14159 ;
		}

} ;

int main(void) {
	double rad , rad2 ;

	cout << "Enter a radius: " ;
	cin >> rad ;

	Circle sample ;
	sample.setRadius(rad) ; // using no-arg constructor

	cout << "Area = " << sample.getArea() << "\n" ;
	cout << "Diameter = " << sample.getArea() << "\n" ;
	cout << "Circumference = " << sample.getCircumference() << "\n" ;

	cout << "Enter another radius: " ;
	cin >> rad2 ;

	Circle sample2(rad2) ; // parameterized constructor

	cout << "Area = " << sample2.getArea() << "\n" ;
	cout << "Diameter = " << sample2.getArea() << "\n" ;
	cout << "Circumference = " << sample2.getCircumference() << "\n" ;

	return 0 ;
}
