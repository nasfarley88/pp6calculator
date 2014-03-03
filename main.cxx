#include <iostream>
#include <cmath>
#include <climits>

double multiply(double a, double b) {
  // Multiply two numbers and return the output
  std::cout << "The answer to " << a << " * " << b
  	    << " is " << a*b << std::endl;
  return a*b;
}

double divide(double a, double b) {
  // Divide two numbers and return the output
  std::cout << "The answer to " << a << " / " << b
  	    << " is " << a/b << std::endl;
  return a/b;
}

double add(double a, double b) {
  // Add two numbers and return the output
  std::cout << "The answer to " << a << " + " << b
  	    << " is " << a+b << std::endl;
  return a+b;
}

double subtract(double a, double b) {
  // Subtract two numbers and return the output
  std::cout << "The answer to " << a << " - " << b
  	    << " is " << a-b << std::endl;
  return a-b;
}

double xIntercept(double m, double c) {
  // For the equation y = mx + c, what is the value of the x intercept?
  std::cout << "The x intercept for the equation y =" << m << "x + " << c << " is " << -c/m;
  return -c/m;
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

bool oneFunctionToRuleThemAll(double (*func)(double,double)) {
  // This function prompts the user for variables to put into func(double,double)
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

  // Run the function with the specified inputs
  (*func)(a,b);
}



int main(int argc, char *argv[]) {
  char decision = 'n';
  char userWantsToStay = 'y';

  do {

    std::cout << "What operation would you like to perform? ";
    std::cin >> decision;

    if(decision == 'm') {
      oneFunctionToRuleThemAll(&multiply);
    }
    else if(decision == 's') {
      oneFunctionToRuleThemAll(&subtract);
    }
    else if(decision == 'a') {
      oneFunctionToRuleThemAll(&add);
    }
    else if(decision == 'd') {
      oneFunctionToRuleThemAll(&divide);
    }
    else {
      std::cout << "I did not understand your input." << std::endl;
    }

    do {
      std::cout << "Do you want to do another calculation(y/n)? ";
      std::cin >> userWantsToStay;
    } while(userWantsToStay != 'y' && userWantsToStay != 'n');
    
  } while(userWantsToStay == 'y');
    
  return 0;
}
