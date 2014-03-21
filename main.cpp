#include <iostream>
#include <cmath>
#include <climits>
#include "ThreeVector.h"
#include <string>

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

void threeVectorLength(double x, double y, double z) {
  std::cout << "The length of the three vector (" << x << "," << y << "," << z << ") is "
	    << sqrt(pow(x,2) + pow(y,2) + pow(z,2)) << std::endl;
}

bool fourVectorLength() {
  double t, x, y, z;
  std::cout << "What is the time coordinate? ";
  std::cin >> t;
  if(cinChecker(!std::cin)) {
    return 1;
  }

  std::cout << "What is the x coordinate? ";
  std::cin >> x;
  if(cinChecker(!std::cin)) {
    return 1;
  }

  std::cout << "What is the y coordinate? ";
  std::cin >> y;
  if(cinChecker(!std::cin)) {
    return 1;
  }

  std::cout << "What is the z coordinate? ";
  std::cin >> z;
  if(cinChecker(!std::cin)) {
    return 1;
  }
  
  std::cout << "The length of the four vector (" << t << "," << x << "," << y << "," << z << ") is "
	    << sqrt(-pow(t,2) + pow(x,2) + pow(y,2) + pow(z,2)) << std::endl;

  return 0;
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

ThreeVector createThreeVectorFromUserInput(const std::string nth)
{
  std::cout << "Enter the x, y, and z coordnates of the " << nth << "vector" << std::endl;
  double xa,ya,za;
  std::cin >> xa >> ya >> za;
  return ThreeVector(xa,ya,za);


}
int main(int argc, char *argv[]) {
  char decision = 'n';
  char userWantsToStay = 'y';

  do {
    bool userTriedToCalculateSomething = true;
  
    std::cout << "What operation would you like to perform? " << std::endl;
    std::cout << "Operations available are:" << std::endl
	      << "1) ThreeVector modulus" << std::endl;
    std::cin >> decision;

    if(decision == '1')
      {
	ThreeVector a = createThreeVectorFromUserInput("first");
	std::cout << "The modulus of a is " << a.modulus() << std::endl;
      }

    // if(decision == 'm') {
    //   oneFunctionToRuleThemAll(&multiply);
    // }
    // else if(decision == 's') {
    //   oneFunctionToRuleThemAll(&subtract);
    // }
    // else if(decision == 'a') {
    //   oneFunctionToRuleThemAll(&add);
    // }
    // else if(decision == 'd') {
    //   oneFunctionToRuleThemAll(&divide);
    // }
    // else if(decision == 'q') {
    //   oneFunctionToRuleThemAll(&solveQuadraticEquation);
    // }
    // else if(decision == 't') {
    //   oneFunctionToRuleThemAll(&threeVectorLength);
    // }
    // else if(decision == 'f') {
    //   fourVectorLength();
    // }
    // else if(decision == 'h') {
    //   std::cout << "So you want some help? Here it is. Type any one of these characters to do an operation" << std::endl;
    //   std::cout << "m: multiply" << std::endl;
    //   std::cout << "s: subtract" << std::endl;
    //   std::cout << "a: add" << std::endl;
    //   std::cout << "d: divide" << std::endl;
    //   std::cout << "q: solve quadratic" << std::endl;
    //   std::cout << "t: three vector length" << std::endl;
    //   std::cout << "f: four vector length" << std::endl;
    //   userTriedToCalculateSomething = false;
    // }
    // else {
    //   std::cout << "I did not understand your input. If you want my help, press 'h' next time." << std::endl;
    //   userTriedToCalculateSomething = false;
    // }

    // do {
    //   if(userTriedToCalculateSomething) {
    // 	std::cout << "Do you want to do another calculation(y/n)? ";
    //   }
    //   else {
    // 	std::cout << "Do you want another chance to impress me(y/n)?";
    //   }
    //   std::cin >> userWantsToStay;
    // } while(userWantsToStay != 'y' && userWantsToStay != 'n');
    
  } while(userWantsToStay == 'y');
  return 0;
}
