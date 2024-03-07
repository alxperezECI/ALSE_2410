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
    return 0.0;
}

/**
 * @return float
 */
float Geometrica::perimetro() {
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
