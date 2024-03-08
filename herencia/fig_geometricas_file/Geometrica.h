/**
 * Project Untitled
 */


#ifndef _GEOMETRICA_H
#define _GEOMETRICA_H
#include <iostream>

using namespace std;

enum fig_G{ //asignarle el "valor" a cada figura para que dependiendo del número se clasifique como x figura
    circulo = 1,
    cuadrado,
    triangulo,
    pentagono
};

class Geometrica { //nombre de la clase
public: 
	
virtual float area(); //virtual indica que si uno de los hijos no implementa la clase, se va a llamar a esta función de la clase padre
	
virtual float perimetro();
	
/**
 * @param stream
 */
//friend ostream& operator<<(ostream& stream, Geometrica& g);

void setX(float x){_xc = x;} //set permite cambiar el valor guardado de la variable privada
float getX(){return _xc;} //get permite obtener el valor guardado en la variable privada
void setY(float y){_yc = y;}
float getY(){return _yc;}
void setAngulo(float a){_angulo = a;}
float getAngulo(){return _angulo;}
void setTipo(fig_G t){_idTipo = t;};
fig_G getTipo(){return _idTipo;};

Geometrica(); //constructor por omisión
~Geometrica(); //destructor

private: //se puede solucionar con un "protected:" y se puede acceder 
//se definen los atributos privados (coordenadas del centro, angulo y tipo)
	float _xc; 
	float _yc;
	float _angulo;
    fig_G _idTipo;
	

};

#endif //_GEOMETRICA_H
