#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;
struct complex{
    double re, im;
};

double magnitud(complex vect ){ //función que encuentra la magnitud
  double mag = sqrt( vect.re * vect.re + vect.im * vect.im );
  return mag;
}

double angulo( complex vect ){ //función que encuentra el ángulo
  double ang = atan2( vect.im, vect.re );
  return ang;
}

complex mayor_magnitud ( complex (&vect)[10] ){
  complex mayor = vect[0];
  for( int i = 0; i < 10; i++ ){
    if(magnitud( mayor ) < magnitud( vect[i] )){
      mayor = vect[i];
    }
  }
  return mayor;
}

complex mayor_angulo ( complex (&vect)[10] ){
  complex mayor = vect[0];
  for( int i = 0; i < 10; i++ ){
    if(angulo( mayor ) < angulo( vect[i] )){
      mayor = vect[i];
    }
  }
  return mayor;
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
  int  datos_int[20]={0}; // FIXME: Agregar un vector para almacenar los números convertidos.

  if(archivo.is_open()){
    for(int i = 0; i < 20; i++){
      getline(archivo, path);
      datos_int[i] = stoi( path );
      cout << datos_int[i] << endl;
    }
    // Con los datos que se van a cargar, crear un vector de 10 complejos que usen la estructura
    // Crear una función que calcule la magnitud del número complejo
    // Crear una funcion que calcule el ángulo del número complejo
    // Mostrar en pantalla el número, su magnitud y su ángulo;
    // Encontrar el número con mayor magnitud y el número con mayor ángulo
    // y mostrarlos en la pantalla.

  complex vect[10]; //arma los vectores de 10 complejos
  int n = 0;
  for( int i = 0; i < 10; i++ ){
    vect[i].re = datos_int[n];
    n++;
    vect[i].im = datos_int[n];
    n++;
  }

  for( int i = 0; i < 10; i++ ){ //imprime número, magnitud y ángulo
    cout << "\nNúmero: [" << vect[i].re << ", " << vect[i].im << "]" <<endl;
    cout << "Magnitud: " << magnitud( vect[i] ) << endl;
    cout << "Ángulo: " << angulo( vect[i] ) << " rad \n" << endl;
  }

  complex mayor_mag = mayor_magnitud( vect ); //mayor magnitud
  complex mayor_ang = mayor_angulo( vect ); //mayor angulo

  cout << "\nEl número con mayor magnitud es: [" << mayor_mag.re << ", " << mayor_mag.im 
  << "] con una magnitud de: " << magnitud( mayor_mag ) << endl; //imprime número de mayor magnitud
  cout << "El número con mayor ángulo es: [" << mayor_ang.re << ", " << mayor_ang.im 
  << "] con un ángulo de: " << angulo( mayor_ang ) << " rad" << endl; //imprime número de mayor ángulo

  return 0;
  }
}