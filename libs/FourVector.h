#ifndef FOURVECTOR_H
#define FOURVECTOR_H

#include <string>

class FourVector
{
private:
  double t_,x_,y_,z_;
public:
  FourVector()
  { t_ = 0, x_ = 0; y_ = 0; z_ = 0;}
  FourVector(double t, double x,double y,double z)
    : t_(t), x_(x), y_(y), z_(z) {};
  // TODO add copy constructor
  // TODO add destructor
  double norm(string metric);
  // innerProduct defined in FourVector.cpp

  // get and set functions
  double gett(){ return t_; }
  double getx(){ return x_; }
  double gety(){ return y_; }
  double getz(){ return z_; }
  double sett(double t) { t_ = t; }
  double setx(double x) { x_ = x; }
  double sety(double y) { y_ = y; }
  double setz(double z) { z_ = z; }
};


#endif // FOURVECTOR_H
