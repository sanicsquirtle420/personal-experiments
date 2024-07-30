/*
07/29/24
I am recreating olemiss-code/111/02-2024/SoftwareSales.java
in C++ because... why not
*/

#include <iostream>
#include <iomanip>
using namespace std ;

int main() {
    double pkgs , before , after, discount ;
    
    cout << "Enter the number of packages purchased: " ;
    cin >> pkgs ;

    cout << "Payment before discount: $" ;
    cin >> before ;

    if (pkgs <= 9) {
        after = before ;
        discount = 0.00 ;
    }

    else if (pkgs <= 19) {
        after = before * 0.2 ;
        discount = after ;
        after = before - after ;
    }    

    else if (pkgs <= 49) {
        after = before * 0.3 ;
        discount = after ;
        after = before - after ;
    }

    else if (pkgs <= 99) {
        after = before * 0.4 ;
        discount = after ;
        after = before - after ;
    }

    else if (pkgs >= 100) {
        after = before * 0.5 ;
        discount = after ;
        after = before - after ;
    }

    cout << "Payment after discount : $" << setprecision(2) << after ;
    cout <<"\nDiscount: $" << setprecision(2) << discount << "\n";
    // bug: setprecision is not formating the double variables after
    //      2 decimal places
    return 0 ;
}
