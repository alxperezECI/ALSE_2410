/**
 * Project Untitled
 */


#ifndef _CIRCULO_H
#define _CIRCULO_H

#include "Geometrica.h" // Se llama a la clase padre.


class Circulo: public Geometrica {
public: 
	
/**
 * @param r
 * @param x
 * @param y
 */
Circulo(float r, float x = 0., float y = 0.); // constructor con parametros,
Circulo(string parametros);

// Metodos para el calculo de área y del perímetro.
float area();
float perimetro();

// Funciones set y get para la manipulación de atributos privados.
void setRadio(float r){_radio = r;}
float getRadio(){return _radio;}
private: 
	float _radio;
	
Circulo(); // Constructor por aomisión.
};

#endif //_CIRCULO_H
