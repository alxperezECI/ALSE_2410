#include "complejo.h"


// Completar el código de todo el archivo para que 
// se ejecute correctamente de acuerdo a lo indicado 
// para la clase.

int main(int argc, char** argv){

  Complejo a( 13., -5. );
  Complejo b( 12., 18. );
  Complejo c = a + b;
  Complejo d = a - b;
  Complejo e = a * b.conjugado();

  cout  << a << endl;
  cout  << b << endl;
  cout  << c << endl;
  cout  << d << endl;
  cout  << e << endl;


  return 0;
}
