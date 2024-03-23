/**
 * Project Untitled
 */


#ifndef _TRIANGULO_H
#define _TRIANGULO_H

#include "Geometrica.h"


class Triangulo: public Geometrica { //se crea la clase hija Triangulo que es parte de la clase padre Geometrica
public: 
	
/**
 * @param b
 * @param h
 * @param x
 * @param y
 */

float area(); //definicion de metodo que calcula area
float perimetro(); //definicion de metodo que calcula perimetro
Triangulo(float b, float h, float x = 0., float y = 0.); //constructor por parametros
Triangulo(string parametros);
private:
	float _base; //atributo privado base
	float _altura; //atributo privado altura
	
Triangulo(); //constructor por omisión
};

#endif //_TRIANGULO_H
