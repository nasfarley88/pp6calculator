#ifndef THREEVECTOR_HXX
#define THREEVECTOR_HXX

class ThreeVector
{
private:
  double x_,y_,z_;
public:
  ThreeVector()
  { x_ = 0; y_ = 0; z_ = 0;}
  ThreeVector(double x,double y,double z)
    : x_(x), y_(y), z_(z) {};
  double modulus();
  double norm() { return this->modulus(); }
  ThreeVector crossWith(ThreeVector);
  ThreeVector dotWith(ThreeVector);

  // get and set functions
  double getx(){ return x_; }
  double gety(){ return y_; }
  double getz(){ return z_; }
  // double setx(double x): {};
  // double sety(double y): {};
  // double setz(double z): {};
};

#else
#endif // THREEVECTOR_HXX
