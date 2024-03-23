/**
 * Project Untitled
 */


#ifndef _PENTAGONO_H
#define _PENTAGONO_H

#include "Geometrica.h"


class Pentagono: public Geometrica { //se crea la clase hija Pentagono que es parte de la clase padre Geometrica
public: //se define lo publico
	
/**
 * @param l
 * @param x
 * @param y
 */
Pentagono(float l, float x, float y); //constructor por parametros
Pentagono(string parametros);

float area(); //metodo que halla el area
float perimetro(); //metodo que halla el perimetro

private: 
	float _lado; //atributo 
	
Pentagono();
};

#endif //_PENTAGONO_H
