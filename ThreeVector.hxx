#ifndef THREEVECTOR_HXX

class ThreeVector
{
private:
  double x_,y_,z_;
public:
  ThreeVector ThreeVector();
  ThreeVector ThreeVector(x,y,z);
  double modulus();
  double norm() { this->modulus() }
  ThreeVector crossWith(ThreeVector);
  ThreeVector dotWith(ThreeVector);
};

#else
#endif // THREEVECTOR_HXX
