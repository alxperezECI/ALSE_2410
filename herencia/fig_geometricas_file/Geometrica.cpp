/**
 * Project Untitled
 */


#include "Geometrica.h"
#include <iostream>

using namespace std;

/**
 * Geometrica implementation
 */


/**
 * @return float
 */
float Geometrica::area() { // Se llama esta función para aquella clase hija que no implemente el metodo de calcular el área.
    return 0.0;
}

/**
 * @return float
 */
float Geometrica::perimetro() { // Se llama esta función para aquella clase hija que no implemente el metodo de calcular el perímetro.
    return 0.0;
}

/**
 * @param stream
 * @return ostream&
 */
//ostream& operator<<(ostream& stream, Geometrica& g) {
//    // cout << "llamada a operador" << endl ;
//    return stream   ;
//}

Geometrica::Geometrica() {

}

Geometrica::~Geometrica(){
    cout << "Llamando destructor de Geometrica" << endl;
}
