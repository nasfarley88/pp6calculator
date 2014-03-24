#include "FourVector.h"
#include <cmath>
#include <iostream>
#include <string>


double innerProduct(const FourVector a, const FourVector b, const std::string metric) 
{
  if(metric=="+---")
    {
      return a.gett()*b.gett() - a.getx()*b.getx() - a.gety()*b.gety() - a.getz()*b.getz();
    }
  else if(metric=="-+++")
    {
      return - a.gett()*b.gett() + a.getx()*b.getx() + a.gety()*b.gety() + a.getz()*b.getz();
    }
  else {
    // Signal there's an error, an inner product should never be negative
    return -1;
  }
}

double innerProduct(const FourVector a, const FourVector b)
{
  return innerProduct(a,b,"-+++");
}

double FourVector::norm()
{
  // TODO add support for complex numbers
  return sqrt(innerProduct(*this,*this));
}

double FourVector::normSquared()
{
  return innerProduct(*this,*this);
}
