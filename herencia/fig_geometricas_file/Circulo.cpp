/**
 * Project Untitled
 */


#include "Circulo.h"
#include <math.h> //permite usar PI para los calculos 
/**
 * Circulo implementation
 */


/**
 * @param r
 * @param x
 * @param y
 */
Circulo::Circulo(float r, float x, float y) { //constructor por parametros 
    _radio = r;
    setX( x ); //es una variable privada, se debe acceder con setX
    setY( y ); //es una variable privada, se debe acceder con setY
    setTipo( circulo ); //es una variable privada, se debe acceder con setTipo
}

Circulo::Circulo(string parametros){
    size_t posicion = 0;
    size_t pos_ant = 0;
    posicion = parametros.find(" ");
    _radio = atof(parametros.substr(0,posicion).c_str()); //se toma el valor del radio
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setX( atof(parametros.substr(0,posicion).c_str()) ); //se fija la coordenada x del centro 
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setY( atof(parametros.substr(0,posicion).c_str()) ); //se fija la coordenada y del centro
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setAngulo( atof(parametros.substr(0,posicion).c_str()) ); //se fija el angulo
    pos_ant =  posicion + 1;
}

Circulo::Circulo() { //constructor por omisión

}

float Circulo::area(){
    return M_PI * _radio * _radio; //calculo del area
}

float Circulo::perimetro(){
    return 2 * M_PI * _radio; //calculo del perimetro
}
