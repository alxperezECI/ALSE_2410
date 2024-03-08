/**
 * Project Untitled
 */


#ifndef _CUADRADO_H
#define _CUADRADO_H

#include "Geometrica.h"


class Cuadrado: public Geometrica { //se crea la clase hija Cuadrado que es parte de la clase padre Geometrica
public: //primero definimos los metodos que son públicos
	
/**
 * @param l
 * @param x
 * @param y
 */

//constructor por parametros
Cuadrado(float l, float x = 0., float y = 0.); //recibe l, la x y la y son opcionales, asigna 0 si no se agrega
Cuadrado(string parametros); //metodo que llama al lector de archivo

float area(); //definición del meotodo area
float perimetro(); //definición del meotodo perimetro

void setLado(float l){ _lado = l;} //permite cambiar el lado guardado como privado
float getLado(){ return _lado;} //permite leer el dato guardado como privado

private: 
	float _lado; //el unico atributo es lado, el resto estan en Geometrica
	
Cuadrado(); //constructor por omisión privado para restringir que se cree un cuadrado sin parametros
};

#endif //_CUADRADO_H
