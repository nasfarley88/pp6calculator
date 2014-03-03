#include <iostream>
#include <cmath>

double multiply(double a, double b) {
  // Multiply two numbers and return the output
  return a*b;
}

double divide(double a, double b) {
  // Divide two numbers and return the output
  return a/b;
}

double add(double a, double b) {
  // Add two numbers and return the output
  return a+b;
}

double subtract(double a, double b) {
  // Subtract two numbers and return the output
  return a-b;
}
  
int main(int argc, char *argv[]) {
  char decision = 'n';

  std::cout << "What operation would you like to perform? ";
  std::cin >> decision;

  // TODO make it so that I can call a function from the
  // function. Yeah. Function pointers?
  if(decision == 'm') {
    double a, b;
    
    std::cout << "What is the first number you wish to muptiply? ";
    std::cin >> a;
    
    std::cout << "What is the second number you wish to muptiply? ";
    std::cin >> b;

    std::cout << "The answer to " << a << "*" << b << " is " << multiply(a,b)
	      << std::endl;

  }
  else {
    std::cout << "I did not understand your input. Goodbye!" << std::endl;
  }
  
  return 0;
}
