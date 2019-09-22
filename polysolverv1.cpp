#include <iostream>
#include <cmath>

int main() {
  
  double a;
  double b;
  double c;
  
  //Entering a
  std::cout << "Enter a: ";
  std::cin >> a;
  
  //Entering b
  std::cout << "Enter b: ";
  std::cin >> b;
  
  //Entering c
  std::cout << "Enter c: ";
  std::cin >> c;
  
  //declaring the two roots
  double root1;
  double root2;
  
  //calculating root1
  root1 = ((-b) + (std::sqrt(std::pow(b,2) - (4*a*c))))/(2*a);
  
  //calculating root2
  root2 = ((-b) - (std::sqrt(std::pow(b,2) - (4*a*c))))/(2*a);
  
  //Seeing this out 
  std::cout << "The first root is: " << root1 << "\nThe second root is: " << root2 << "\nWhile a = " << a << "\nb = " << b <<"\nc = " << c <<"\n";
    
}