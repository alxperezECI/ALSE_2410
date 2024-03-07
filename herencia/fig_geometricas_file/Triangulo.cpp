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
    _base = b;
    _altura = h;
    setX( x );
    setY( y );
    setTipo( triangulo );
}

Triangulo::Triangulo(string parametros) {
    size_t posicion = 0;
    size_t pos_ant = 0;
    posicion = parametros.find( " " );
    _base = atof(parametros.substr(0,posicion).c_str());
    pos_ant =  posicion + 1;
    posicion = parametros.find( " ", pos_ant );
    _altura = atof(parametros.substr(0,posicion).c_str());
    pos_ant =  posicion + 1;
    posicion = parametros.find( " ", pos_ant );
    setX( atof(parametros.substr(0,posicion).c_str()) );
    pos_ant =  posicion + 1;
    posicion = parametros.find( " ", pos_ant );
    setY( atof(parametros.substr(0,posicion).c_str()) );
    pos_ant =  posicion + 1;
    posicion = parametros.find( " ", pos_ant );
    setAngulo( atof(parametros.substr(0,posicion).c_str()) );
    pos_ant =  posicion + 1;
}

Triangulo::Triangulo() {

}
float Triangulo::area(){
    return _base * _altura / 2.;
}

float Triangulo::perimetro(){
    return 3 * _base;
}

