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
Cuadrado::Cuadrado(float l, float x, float y) { //constructor por parametros
    _lado = l; //se asigna a _lado, el lado ingresado
    setX( x ); //se debe usar el set, ya que pertenece a la clase geometrica y es privado
    setY( y ); 
    setTipo( cuadrado );
}

Cuadrado::Cuadrado(string parametros){
    size_t posicion = 0;
    size_t pos_ant = 0;
    posicion = parametros.find(" ");
    _lado = atof(parametros.substr(0,posicion).c_str()); //se toma el valor del lado del cuadrado
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

Cuadrado::Cuadrado() {

} //constructor por omisión

float Cuadrado::area(){
    return _lado * _lado; //metodo que calcula el area
}

float Cuadrado::perimetro(){
    return 4 * _lado; //metodo que calcula el perimetro
}

