/**
 * Project Untitled
 */


#ifndef _GEOMETRICA_H
#define _GEOMETRICA_H
#include <iostream>

using namespace std;

enum fig_G{ // Lista los posibles casos de estudio de la funcion.
    circulo = 1,
    cuadrado,
    triangulo,
    pentagono
};

class Geometrica {
public: 
	
virtual float area(); // Se usan funciones virtual, para el caso de que las clases hijas no implementen las funciones area y perimetro.
	
virtual float perimetro();
	
/**
 * @param stream
 */
//friend ostream& operator<<(ostream& stream, Geometrica& g);

// funciones set y get oara la manipulación de atributos.
void setX(float x){_xc = x;}
float getX(){return _xc;}
void setY(float y){_yc = y;}
float getY(){return _yc;}
void setAngulo(float a){_angulo = a;}
float getAngulo(){return _angulo;}
void setTipo(fig_G t){_idTipo = t;};
fig_G getTipo(){return _idTipo;};

Geometrica(); // Constructor por omisión de la clase Geometrica.
~Geometrica(); // Destructor de la clase Geometrica.

private: // Se podria definir como "protected", y de esaforma heredarlo.
	float _xc; // Definicion de los atributos de la clase Geometrica.
	float _yc;
	float _angulo;
    fig_G _idTipo;
	

};

#endif //_GEOMETRICA_H
