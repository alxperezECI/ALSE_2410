/**
 * Project Untitled
 */


#ifndef _DATO_H
#define _DATO_H

class Dato {
public: 
    Dato();
    Dato(float a);
    Dato* getSig();
    void setSig(Dato* a);
    float getDato();
private: 
    float _dato;
    Dato *_siguiente;
};

#endif //_DATO_H
