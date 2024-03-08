/**
 * Project Untitled
 */


#include "Pentagono.h"
#include <cmath>

/**
 * Pentagono implementation
 */


/**
 * @param l
 * @param x
 * @param y
 */
Pentagono::Pentagono(float l, float x, float y) { // Para acceder a variables privadas se usará la funcion set.
    _lado = l;
    setX( x );
    setY( y );
    setTipo( pentagono );
}

Pentagono::Pentagono(string parametros) {
    size_t posicion = 0;
    size_t pos_ant = 0;
    posicion = parametros.find(" ");
    _lado = atof(parametros.substr(0,posicion).c_str()); // Se define el valor del lado.
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setX( atof(parametros.substr(0,posicion).c_str()) );// Usando la función "setX" se determina la cordenada x del centro de la figura,
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setY( atof(parametros.substr(0,posicion).c_str()) ); // y con "setY" se determina co coordenada y.
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setAngulo( atof(parametros.substr(0,posicion).c_str()) );
    pos_ant =  posicion + 1;
}

float Pentagono::area(){ // Cálulo del área.
    float apotema = _lado / ( 2 * tan( 36 * ( M_PI / 180 ) ) ); // Calculo del apotema.
    float area = perimetro() * apotema / 2;
    return area;
}

float Pentagono::perimetro(){ // Cálculo del perímetro.
    return _lado * 5;
}


Pentagono::Pentagono() {

}
