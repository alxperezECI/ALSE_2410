/**
 * Project Untitled
 */


#ifndef _PENTAGONO_H
#define _PENTAGONO_H

#include "Geometrica.h"


class Pentagono: public Geometrica {
public: 
	
/**
 * @param l
 * @param x
 * @param y
 */
Pentagono(float l, float x, float y); // Constructor con parametros.
Pentagono(string parametros);

// Metodos para que determinan el calculo del area y del perimetro.
float perimetro ();
float area();

private: 
	float _lado;
	
Pentagono(); // Constructor por omisión.
};

#endif //_PENTAGONO_H
