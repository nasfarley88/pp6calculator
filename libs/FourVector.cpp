#include "FourVector.h"
#include <cmath>
#include <iostream>
#include <string>


double innerProduct(const FourVector a, const FourVector b, const string metric)
{
  if(metric=="+---")
    {
      return a.gett()*b.gett() - a.getx()*b.getx() - a.gety()*b.gety() - a.getz()*b.getz();
    }
  else if(metric=="-+++")
    {
      return - a.gett()*b.gett() + a.getx()*b.getx() + a.gety()*b.gety() + a.getz()*b.getz();
    }
}

double innerProduct(const FourVector a, const FourVector b)
{
  return innerProduct(a,b,"-+++");
}

double FourVector::norm(string metric)
{
  // TODO add support for complex numbers
  return sqrt(innerProduct(*this,*this));
}
