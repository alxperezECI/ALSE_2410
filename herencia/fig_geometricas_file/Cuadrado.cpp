/**
 * Project Untitled
 */


#include "Cuadrado.h"

/**
 * Cuadrado implementation
 */


/**
 * @param l
 * @param x
 * @param y
 */
Cuadrado::Cuadrado(float l, float x, float y) { // Con las funciones "setX" y "setY", se accede a las variables privadas de la clase geometrica.
    _lado = l;
    setX( x );
    setY( y );
    setTipo( cuadrado );
}

Cuadrado::Cuadrado(string parametros){
    size_t posicion = 0;
    size_t pos_ant = 0;
    posicion = parametros.find(" ");
    _lado = atof(parametros.substr(0,posicion).c_str()); // Se toma el valor del lado del cuadrado.
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

Cuadrado::Cuadrado() {

}

float Cuadrado::area(){ // Calculo del área.
    return _lado * _lado;
}

float Cuadrado::perimetro(){ // Calculo del perímetro.
    return 4 * _lado;
}

