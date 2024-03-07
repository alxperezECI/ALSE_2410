/**
 * Project Untitled
 */


#ifndef _GEOMETRICA_H
#define _GEOMETRICA_H
#include <iostream>

using namespace std;

enum fig_G{
    circulo = 1,
    cuadrado,
    triangulo,
    pentagono
};

class Geometrica {
public: 
	
virtual float area();
	
virtual float perimetro();
	
/**
 * @param stream
 */
//friend ostream& operator<<(ostream& stream, Geometrica& g);

void setX(float x){_xc = x;}
float getX(){return _xc;}
void setY(float y){_yc = y;}
float getY(){return _yc;}
void setAngulo(float a){_angulo = a;}
float getAngulo(){return _angulo;}
void setTipo(fig_G t){_idTipo = t;};
fig_G getTipo(){return _idTipo;};

Geometrica();
~Geometrica();

private:
	float _xc;
	float _yc;
	float _angulo;
    fig_G _idTipo;
	

};

#endif //_GEOMETRICA_H
