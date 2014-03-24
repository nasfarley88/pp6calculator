#include "Threevector.h"
#include <cmath>
#include <iostream>


double ThreeVector::modulus()
{
  return sqrt(x_*x_+y_*y_+z_*z_);
}

ThreeVector cross(ThreeVector a, ThreeVector b)
{
  std::cout << "Not yet implemented" << std::endl;
  return a;
}

double innerProduct(ThreeVector a, ThreeVector b)
{
  return a.getx()*b.getx()+a.gety()*b.gety()+a.getz()*b.getz();
}

double dot(ThreeVector a, ThreeVector b)
{
  // Alias for innerProduct of ThreeVector
  return innerProduct(a,b);
}
