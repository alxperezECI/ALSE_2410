/**
 * Project Untitled
 */


#include "Pentagono.h"

/**
 * Pentagono implementation
 */


/**
 * @param l
 * @param x
 * @param y
 */
Pentagono::Pentagono(float l, float x, float y) {
    _lado = l;
    setX( x );
    setY( y );
    setTipo( pentagono );
}

Pentagono::Pentagono(string parametros) {
    size_t posicion = 0;
    size_t pos_ant = 0;
    posicion = parametros.find(" ");
    _lado = atof(parametros.substr(0,posicion).c_str());
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setX( atof(parametros.substr(0,posicion).c_str()) );
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setY( atof(parametros.substr(0,posicion).c_str()) );
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setAngulo( atof(parametros.substr(0,posicion).c_str()) );
    pos_ant =  posicion + 1;
}

Pentagono::Pentagono() {

}
