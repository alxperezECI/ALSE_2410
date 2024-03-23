/**
 * Project Untitled
 */


#include "Pentagono.h"
#include <cmath> //librebria para realizar los calculos de area 

using namespace std;

/**
 * Pentagono implementation
 */


/**
 * @param l
 * @param x
 * @param y
 */
Pentagono::Pentagono(float l, float x, float y) { //constructor por parametros
    _lado = l; //se asigna el lado
    setX( x ); // se usa set, ya que estas coordenadas son definidas en la clase padre (Geometrica)
    setY( y );
    setTipo( pentagono );
}

Pentagono::Pentagono(string parametros) { 
    size_t posicion = 0;
    size_t pos_ant = 0;
    posicion = parametros.find(" ");
    _lado = atof(parametros.substr(0,posicion).c_str()); //se toma el valor del lado del pentagono
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setX( atof(parametros.substr(0,posicion).c_str()) ); //se fija la coordenada x usando setX
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setY( atof(parametros.substr(0,posicion).c_str()) ); //se fija la coordenada y usando setY
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setAngulo( atof(parametros.substr(0,posicion).c_str()) ); //se fija el angulo usando setAngulo
    pos_ant =  posicion + 1;
}

Pentagono::Pentagono() { //constructor por omisión

}

float Pentagono::perimetro(){ //calculo del perimetro, devuelve un flotante
    return 5 * _lado;
}

float Pentagono::area(){ //calculo del area, devuelve un flotante 
    return (perimetro()*(_lado/(2*tan(36*(M_PI/180))))/2);
}

