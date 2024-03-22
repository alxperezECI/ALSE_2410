/**
 * Project Untitled
 */


#ifndef _FILTRO_H
#include "Dato.h"

class Filtro {
public:  
    Filtro(int tamano);
    void agregarDato(float a);
    void setTamano(int a){_tamano = a;}
    int  getTamano(){ return _tamano;}
    float promedio();
private: 
    int _tamano;
    Dato* _cabezaFiltro;
};

#endif //_FILTRO_H
