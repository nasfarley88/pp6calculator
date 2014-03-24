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
  double norm();
  double normSquared();
  // innerProduct defined in FourVector.cpp
  double invariantMass() { return this->norm(); }
  double invariantMassSquared() { return this->normSquared(); }

  // get and set functions
  double gett() const { return t_; }
  double getx() const { return x_; }
  double gety() const { return y_; }
  double getz() const { return z_; }
  double sett(double t) { t_ = t; return t_; }
  double setx(double x) { x_ = x; return x_; }
  double sety(double y) { y_ = y; return y_; }
  double setz(double z) { z_ = z; return z_; }
};


#endif // FOURVECTOR_H
