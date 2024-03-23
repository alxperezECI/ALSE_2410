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
float Geometrica::area() {
    return 0.0; //devolvera área como 0 si el metodo área no esta definido en las clases hijas
}

/**
 * @return float
 */
float Geometrica::perimetro() {
    return 0.0; //devolvera perímetro como 0 si el metodo área no esta definido en las clases hijas
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

} //operador por omisión

Geometrica::~Geometrica(){
    cout << "Llamando destructor de Geometrica" << endl; //imprimira esto cuando se llame al destructor cuando se quiera liberar la memoria
} 
