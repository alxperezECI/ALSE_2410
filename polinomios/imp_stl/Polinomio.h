/**
 * Project Untitled
 */


#ifndef _POLINOMIO_H
#define _POLINOMIO_H
#include <list>
#include <string>
#include <iostream>
#include <utility>      // std::pair, std::get

using namespace std;

typedef std::pair<int,float> termino;
class Polinomio {
  public:
    Polinomio();
    Polinomio(string pol);
    Polinomio(Polinomio& pol);
    ~Polinomio();
    Polinomio& operator +(Polinomio& p);
    Polinomio& operator -(Polinomio& p);
    Polinomio& operator  *(Polinomio& p);
    Polinomio& operator /(float f);
    friend ostream& operator << (ostream& stream, Polinomio& p);
    bool    borrar();
    bool    redefinir(string pol);
    int     getOrden();
    char    getVariable();
    void    setVariable(char value);
    void    nuevoTermino(float c, int p);
    void    simplificar();
    bool    ordenar();
    string  getString();
  private:
    int                 _orden;
    char                _variable;
    std::list<termino>  _terminoL;
};

#endif //_POLINOMIO_H

