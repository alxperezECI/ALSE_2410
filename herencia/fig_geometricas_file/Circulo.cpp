/**
 * Project Untitled
 */


#include "Circulo.h"
#include <math.h>
/**
 * Circulo implementation
 */


/**
 * @param r
 * @param x
 * @param y
 */
Circulo::Circulo(float r, float x, float y) { // Para acceder a variables privadas se usará la funcion set.
    _radio = r;
    setX( x );
    setY( y );
    setTipo ( circulo );
}

/* El codigo con el que se leerá el archivo .txt es similar en el archivo Cuadrado.cpp, Pentago.cpp, Triangulo.cpp y este porlo que solo se
    especificará los aspectos caracteristicos de cada uno de ellos. */

Circulo::Circulo(string parametros){
    size_t posicion = 0;
    size_t pos_ant = 0;
    posicion = parametros.find(" ");
    _radio = atof(parametros.substr(0,posicion).c_str()); // Se le da el valor corespondiente al radio.
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setX( atof(parametros.substr(0,posicion).c_str()) ); // Usando la función "setX" se determina la cordenada x del centro de la figura,
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setY( atof(parametros.substr(0,posicion).c_str()) ); // y con "setY" se determina co coordenada y.
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    setAngulo( atof(parametros.substr(0,posicion).c_str()) ); 
    pos_ant =  posicion + 1;
}

Circulo::Circulo() {

}

float Circulo::area(){ // Cálulo del área.
    return M_PI * _radio * _radio;
}

float Circulo::perimetro(){ // Cálculo del perímetro.
    return 2 * M_PI * _radio;
}
