#include "punto.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv){
  punto_st puntos[10];

  punto_st suma;
  suma.x = 0.0;
  suma.y = 0.0;


  // Usando la sobrecarga del operador de suma (+)
  for( int i = 0; i < 10; i++){
    suma = suma + puntos[i];
  }

  cout << "La suma es: (" << suma.x << ", " << suma.y << ")." << endl;

  suma.x = 0.0;
  suma.y = 0.0;

  // Usando la sobrecarga del operador de acumulación (+=)
  for( int i = 0; i < 10; i++){
    suma += puntos[i];
  }

  // Usando la sobrecarga del operado de flujo de salida (<<).
  cout << "La suma es: " << suma << endl;

  return 0;
}
