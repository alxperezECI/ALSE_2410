#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;
struct complex{
    double re, im;
    double magnitud(){ return sqrt( re * re + im * im ); };
    double angulo(){ return atan2( im, re); };
};

// Crear una función que calcule la magnitud del número complejo
double magnitud( const complex &a ){
  return sqrt( a.re * a.re + a.im * a.im);
}

// Crear una funcion que calcule el ángulo del número complejo
double angulo( const complex &a ){
  return atan2( a.im, a.re );
}

int main(int argc, char** argv){
  if(argc != 2){
    cout << "El programa se usa así:" << endl;
    cout << "lectura_coef path_to_file" << endl;
    cout << "Se debe indicar la ruta al archivo a leer" << endl;
    return 1;
  }

  string path;
  path = argv[1];
  ifstream archivo;
  archivo.open(path);

  cout << "Se abrirá el archivo: " << path << endl;

  // Variables definidas para el proceso
  int  datos_int[20]={0};

  if(archivo.is_open()){
    for(int i = 0; i < 20; i++){
      getline(archivo, path);
      datos_int[i] = stoi( path );
//      cout << datos_int[i] << endl;
    }

    // Con los datos que se van a cargar, crear un vector de 10 complejos que usen la estructura
    complex complejos[10];
    double max_mag = -INFINITY, max_ang = -M_PI, mag, ang;
    int  idx_max_mag = 0, idx_max_ang = 0;

    cout << "Número \t\t\t Magnitud \t\t Ángulo" << endl;
    for( int i = 0; i < 10; i++){
      complejos[i].re = datos_int[2*i];
      complejos[i].im = datos_int[2*i+1];

      // max_mag = max_mag < magnitud( complejos[i] ) ? magnitud( complejos[i] ) : max_mag;
      mag = magnitud( complejos[i] );  // mag = complejos[i].magnitud();
      ang = angulo ( complejos[i] );   // ang = complejos[i].angulo();

    // Mostrar en pantalla el número, su magnitud y su ángulo;
      cout << "El número: " << complejos[i].re << " + " << complejos[i].im << "j tiene una magnitud de " << mag << " y un ángulo de ";
      cout << ang << " rad." << endl;

    // Encontrar el número con mayor magnitud y el número con mayor ángulo
    // y mostrarlos en la pantalla.
      if( max_mag < mag ){
        max_mag = mag ;
        idx_max_mag = i;
      }
      if( max_ang < ang ) {
        max_ang = ang ;
        idx_max_ang = i;
      }
    }

    cout << "El número con mayor magnitud es: " << complejos[idx_max_mag].re << " + " << complejos[idx_max_mag].im << "j" <<  endl;
    cout << "El número con mayor ángulo es: " << complejos[idx_max_ang].re << " + " << complejos[idx_max_ang].im << "j" <<  endl;
  }
  return 0;
}
