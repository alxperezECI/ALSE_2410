#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

struct complex{
    double re, im;
    double mag, ang;
};

using namespace std;

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
  }
    // Con los datos que se van a cargar, crear un vector de 10 complejos que usen la estructura
    // Crear una función que calcule la magnitud del número complejo
    // Crear una funcion que calcule el ángulo del número complejo
    // Mostrar en pantalla el número, su magnitud y su ángulo;
    // Encontrar el número con mayor magnitud y el número con mayor ángulo
    // y mostrarlos en la pantalla.

  //int datos_int[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 12, 13, 14, 15, 16, 17, 18, 0};

  //imprmo los datos datos del arrelo de enteros.
  for ( int i=0 ; i<20 ; i++ ){
    cout << datos_int[i] << endl;
  }

  //ingreso de datos al arreglo.
  complex vec_com[10];
  int n = 0;
  for ( int i=0 ; i<10 ; i++ ){
    vec_com[i].re = datos_int[n];
    n++;
    vec_com[i].im = datos_int[n];
    n++;
  }

  //imprimir el arreglo que contine la dupla.
  for ( int i = 0 ; i < 10 ; i++ ){
    cout << "[" << vec_com[i].re << ", " << vec_com[i].im << "]" << endl;
  }

  //magnitud del imaginario.
  for ( int i=0; i<10; i++ ){
    double mag = sqrt( vec_com[i].re*vec_com[i].re + vec_com[i].im*vec_com[i].im);
    //cout << mag << endl;
    vec_com[i].mag = mag;
  }

  cout << " " << endl;

  //ángulo del imaginario.
  for ( int i=0; i<10; i++ ){
    double ang = atan(vec_com[i].im/vec_com[i].re);
    //cout << ang << endl;
    vec_com[i].ang = ang;
  }

  //imprimir el arreglo que contine los datos de cada imaginario.
  for ( int i = 0 ; i < 10 ; i++ ){
    cout << "[" << vec_com[i].re << ", " << vec_com[i].im << "]" << endl;
    cout << "mag: " << vec_com[i].mag << " ang: " << vec_com[i].ang << endl; 
  }

  cout << " " << endl;

  //comparador de ángulos y magnitudes.
  int my_m = 0;
  float m = 0;
  int my_a = 0;
  float a = 0;

  for ( int i = 0 ; i < 10 ; i++ ){
    if ( vec_com[i].mag > m ){
      m = vec_com[i].mag;
      my_m = i;
    }
    if ( vec_com[i].ang > a ){
      a = vec_com[i].ang;
      my_a = i;
    }
  }

  //imprimir el imaginario con mayor angulo y mayor magnitud.
  cout << "El imaginario con mayor magnitud es:" << " ";
  cout << "[" << vec_com[my_m].re << ", " << vec_com[my_m].im << "], ";
  cout << "mag = " << vec_com[my_m].mag << endl;
  cout << "El imaginario con mayor ámgulo es:" << " ";
  cout << "[" << vec_com[my_a].re << ", " << vec_com[my_a].im << "], "; 
  cout << "ang = " << vec_com[my_a].ang << endl;
  




  return 0;
}








