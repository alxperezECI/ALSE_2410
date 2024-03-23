/**
 * Project Untitled
 */


#ifndef _CIRCULO_H
#define _CIRCULO_H

#include "Geometrica.h"


class Circulo: public Geometrica { //se crea la clase hija Circulo que es parte de la clase padre Geometrica
public: //se define lo publico
	
/**
 * @param r
 * @param x
 * @param y
 */
Circulo(float r, float x = 0., float y = 0.); //constructor por parametros
Circulo(string parametros);
float area(); //metodo que halla el area
float perimetro(); //metoddo que halla el perimetro

void setRadio(float r){_radio = r;} //permite cambiar el radio el cual es privado
float getRadio(){return _radio;} //permite obtener el radio el cual es privado
private: 
	float _radio; //atributo privado radio
	
Circulo();
};

#endif //_CIRCULO_H
