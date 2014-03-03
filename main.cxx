#include <iostream>
#include <cmath>
#include <climits>

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

bool cinChecker(bool x) {
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  if(x) {
    std::cout << "Why are you feeding me garbage?" << std::endl;
    return 1;
  }
  else {
    return 0;
  }
}

bool oneFunctionToRuleThemAll(double (*func)(double,double), char operatorChar) {
  double a, b;
    
  std::cout << "What is the first number you wish to operate? ";
  std::cin >> a;
  if(cinChecker(!std::cin)) {
    return 0;
  }
    
  std::cout << "What is the second number you wish to operate? ";
  std::cin >> b;
  if(cinChecker(!std::cin)) {
    return 0;
  }

  std::cout << "The answer to " << a << " " << operatorChar << " " << b
	    << " is " << (*func)(a,b) << std::endl;

}


int main(int argc, char *argv[]) {
  char decision = 'n';

  std::cout << "What operation would you like to perform? ";
  std::cin >> decision;

  if(decision == 'm') {
    oneFunctionToRuleThemAll(&multiply,'*');
  }
  else if(decision == 's') {
    oneFunctionToRuleThemAll(&subtract,'-');
  }
  else if(decision == 'a') {
    oneFunctionToRuleThemAll(&add,'+');
  }
  else if(decision == 'd') {
    oneFunctionToRuleThemAll(&divide,'/');
  }
  else {
    std::cout << "I did not understand your input. Goodbye!" << std::endl;
  }
  
  return 0;
}
