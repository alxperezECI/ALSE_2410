#include "punto.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv){
  Punto puntos[10];

  Punto suma;

  suma.X( 56. );
  suma.Y( 89. );

  // Usando la sobrecarga del operador de suma (+)
  for( int i = 0; i < 10; i++){
    suma = suma + puntos[i];
  }

  cout << "La suma es: " << suma.X() << endl;


  // Usando la sobrecarga del operador de acumulación (+=)
  for( int i = 0; i < 10; i++){
    suma += puntos[i];
  }

  // Usando la sobrecarga del operado de flujo de salida (<<).
  cout << "La suma es: " << suma << endl;

  return 0;
}
