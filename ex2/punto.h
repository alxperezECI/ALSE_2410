#include <iostream>

using namespace std;

class Punto{
    float _x, _y;
  public:
    Punto();
    void X( const float &x );
    void Y( const float &y );
    float X();
    float Y();
    Punto operator+( const Punto &a );
    Punto& operator+=( const Punto &a );
    friend ostream& operator<<(ostream &out, const Punto &b);
};    











