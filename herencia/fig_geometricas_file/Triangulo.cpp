/**
 * Project Untitled
 */


#include "Triangulo.h"

/**
 * Triangulo implementation
 */


/**
 * @param b
 * @param h
 * @param x
 * @param y
 */
Triangulo::Triangulo(float b, float h, float x, float y) {
    _base = b; //se asigna la base
    _altura = h; //se asigna la altura
    setX( x ); //se usa set ya que es un atributo privado de la clase geometrica
    setY( y );
    setTipo( triangulo );
}

Triangulo::Triangulo(string parametros) {
    size_t posicion = 0;
    size_t pos_ant = 0;
    posicion = parametros.find( " " );
    //asigna base y altura del archivo txt
    _base = atof(parametros.substr(0,posicion).c_str()); 
    pos_ant =  posicion + 1;
    posicion = parametros.find( " ", pos_ant );
    _altura = atof(parametros.substr(0,posicion).c_str()); 
    pos_ant =  posicion + 1;
    posicion = parametros.find( " ", pos_ant );
    setX( atof(parametros.substr(0,posicion).c_str()) ); //asigna la coordenada x del centro con el setX
    pos_ant =  posicion + 1;
    posicion = parametros.find( " ", pos_ant );
    setY( atof(parametros.substr(0,posicion).c_str()) ); //asigna la coordenada y del centro con el setY
    pos_ant =  posicion + 1;
    posicion = parametros.find( " ", pos_ant );
    setAngulo( atof(parametros.substr(0,posicion).c_str()) ); //asigna el angulo con el setAngulo
    pos_ant =  posicion + 1;
}

Triangulo::Triangulo() { //constructor por omisión

}
float Triangulo::area(){ //calcula el area del triangulo
    return _base * _altura / 2.;
}

float Triangulo::perimetro(){ //calcula el perimetro del triangulo
    return 3 * _base;
}

