/**
 * Project Untitled
 */


#include "Dato.h"
#include <iostream>

/**
 * Dato implementation
 */


Dato::Dato() {
    _dato = 0.;
    _siguiente = NULL;
}

/**
 * @param a
 */
Dato::Dato(float a) {
    _dato = a;
    _siguiente = NULL;
}

/**
 * @return Dato*
 */
Dato* Dato::getSig() {
    return _siguiente;
}

/**
 * @param a
 * @return void
 */
void Dato::setSig(Dato* a) {
    _siguiente = a;
}

/**
 * @return float
 */
float Dato::getDato() {
    return _dato;
}
