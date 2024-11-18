#include <iostream>
#include <string>

// using namespace std ;

int main() {
  std::string name ;
  std::cout << "What's your name " ;
  std::cin >> name ;
  std::cout << "Let the kitsune guide you " << name << "!\n" ;
  // I hate the cout / cin synatx with the << / >>
  // but I guess it makes sense
  return 0 ;
}
