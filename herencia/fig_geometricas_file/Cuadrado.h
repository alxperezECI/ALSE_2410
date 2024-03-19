/**
 * Project Untitled
 */


#ifndef _CUADRADO_H
#define _CUADRADO_H

#include "Geometrica.h"


class Cuadrado: public Geometrica { // La clase Cuadrado pertenece la clase Geometrica.
public: 
	
/**
 * @param l
 * @param x
 * @param y
 */
Cuadrado(float l, float x = 0., float y = 0.); // Constructor con parametros.
Cuadrado(string parametros);

// Metodos para que determinan el calculo del area y del perimetro.
float area();
float perimetro();

// Funciones set y get para la manipulación de atributos privados.
void setLado(float l){ _lado = l;}
float getLado(){ return _lado;}

private: 
	float _lado;
	
Cuadrado(); // Constructor por omisión.
};

#endif //_CUADRADO_H
