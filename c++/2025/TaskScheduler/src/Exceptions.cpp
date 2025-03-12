#include <exception>
#include <iostream>
#include <string>

using namespace std ;

class EmptyException : public exception {
    private:
        string msg_ ;
    public:
        EmptyException(const string& message) : msg_(message) {}
        const char* what() const noexcept override {
            return msg_.c_str() ;
        }
} ;
