#include <iostream>
#include "punto.h"

using namespace std;

Punto::Punto(){
    _x = _y = 0.0;
}

void Punto::X( const float &x ){
    _x = x;
}

void Punto::Y( const float &y ){
    _y = y;
}

float Punto::Y(){
    return _y;
}

float Punto::X(){
    return _x;
}

Punto Punto::operator+( const Punto &a ){
    Punto res;
    res._x = _x + a._x;
    res._y = _y + a._y;
    return res;
}

Punto& Punto::operator+=( const Punto &a ){
    _x += a._x;
    _y += a._y;
    return *this;
}

ostream& operator<<(ostream &out, const Punto &b){
    out << "( " << b._x << ", " << b._y << " )";
    return out;
}










