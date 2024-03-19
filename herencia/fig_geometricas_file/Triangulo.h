/**
 * Project Untitled
 */


#ifndef _TRIANGULO_H
#define _TRIANGULO_H

#include "Geometrica.h"


class Triangulo: public Geometrica {
public: 
	
/**
 * @param b
 * @param h
 * @param x
 * @param y
 */

// Metodos para que determinan el calculo del area y del perimetro.
float area();
float perimetro();
Triangulo(float b, float h, float x = 0., float y = 0.); // Constructor con parametros.
Triangulo(string parametros);
private: 
	float _base;
	float _altura;
	
Triangulo(); // Constructor por omisión.
};

#endif //_TRIANGULO_H
