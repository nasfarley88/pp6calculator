#ifndef THREEVECTOR_HXX

class ThreeVector
{
private:
  double x_,y_,z_;
public:
  ThreeVector ThreeVector()
  { x_ = 0; y_ = 0; z_ = 0}
  ThreeVector ThreeVector(x,y,z)
    x_(x), y_(y), z_(z);
  double modulus();
  double norm() { this->modulus() }
  ThreeVector crossWith(ThreeVector);
  ThreeVector dotWith(ThreeVector);
};

#else
#endif // THREEVECTOR_HXX
