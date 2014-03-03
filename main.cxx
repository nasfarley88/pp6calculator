#include <iostream>
#include <cmath>
#include <climits>

void multiply(double a, double b) {
  // Multiply two numbers and return the output
  std::cout << "The answer to " << a << " * " << b
  	    << " is " << a*b << std::endl;
}

void divide(double a, double b) {
  // Divide two numbers and return the output
  std::cout << "The answer to " << a << " / " << b
  	    << " is " << a/b << std::endl;
}

void add(double a, double b) {
  // Add two numbers and return the output
  std::cout << "The answer to " << a << " + " << b
  	    << " is " << a+b << std::endl;
}

void subtract(double a, double b) {
  // Subtract two numbers and return the output
  std::cout << "The answer to " << a << " - " << b
  	    << " is " << a-b << std::endl;
}

void xIntercept(double m, double c) {
  // For the equation y = mx + c, what is the value of the x intercept?
  std::cout << "The x intercept for the equation y =" << m << "x + " << c << " is " << -c/m;
}

void solveQuadraticEquation(double a, double b, double c) {
  std::cout << "y = 0 for y = ";
  if(a!=1) std::cout << a;
  std::cout << "x^2 + " << b << "x + " << c << " when" << std::endl
	    << "x = " << (-b+sqrt(pow(b,2)-4*a*c))/(2*a) << std::endl
	    << "x = " << (-b-sqrt(pow(b,2)-4*a*c))/(2*a) << std::endl;
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

bool oneFunctionToRuleThemAll(void (*func)(double,double)) {
  // This function prompts the user for variables to put into func(double,double)
  double a, b;
    
  std::cout << "What is the first number you wish to operate? ";
  std::cin >> a;
  if(cinChecker(!std::cin)) {
    return 1;
  }
    
  std::cout << "What is the second number you wish to operate? ";
  std::cin >> b;
  if(cinChecker(!std::cin)) {
    return 1;
  }

  // Run the function with the specified inputs
  (*func)(a,b);

  return 0;
}

bool oneFunctionToRuleThemAll(void (*func)(double,double,double)) {
  // This function prompts the user for variables to put into func(double,double,double)
  //
  // NB this is an overloaded function
  double a, b, c;
    
  std::cout << "What is the first number you wish to operate? ";
  std::cin >> a;
  if(cinChecker(!std::cin)) {
    return 0;
  }
    
  std::cout << "What is the second number you wish to operate? ";
  std::cin >> b;
  if(cinChecker(!std::cin)) {
    return 1;
  }

  std::cout << "What is the second number you wish to operate? ";
  std::cin >> c;
  if(cinChecker(!std::cin)) {
    return 1;
  }

  // Run the function with the specified inputs
  (*func)(a,b,c);

  return 0;
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
    else if(decision == 'q') {
      oneFunctionToRuleThemAll(&solveQuadraticEquation);
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
