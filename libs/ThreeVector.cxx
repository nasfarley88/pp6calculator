#include "Threevector.hxx"
#include <cmath>
#include <iostream>


double ThreeVector::modulus()
{
  return sqrt(x_*x_+y_*y_+z_*z_);
}

ThreeVector ThreeVector::crossWith(ThreeVector a)
{
  std::cout << "Not yet implemented" << std::endl;
  return a;
}

ThreeVector ThreeVector::dotWith(ThreeVector a)
{
  return ThreeVector(x_*a.getx(),y_*a.gety(),z_*getz());
}
