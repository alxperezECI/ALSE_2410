#include <iostream>
#include <fstream>
#include <string>
#include <cmath> // Necesario para las funciones matemáticas

using namespace std;
// Definición de la estructura para números complejos
struct complex{
    double re, im;
};

// Función para calcular la magnitud de un número complejo
double magnitud(complex c) {
    return sqrt(c.re * c.re + c.im * c.im);
}

// Función para calcular el ángulo de un número complejo en radianes
double angulo(complex c) {
    return atan2(c.im, c.re);
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
    // Con los datos que se van a cargar, crear un vector de 10 complejos que use la estructura
    complex numeros[10]; // Vector de números complejos

    // Llenar el vector de números complejos
    for(int i = 0; i < 10; i++) {
        numeros[i].re = datos_int[i * 2]; // Parte real
        numeros[i].im = datos_int[i * 2 + 1]; // Parte imaginaria
    }

    // Mostrar en pantalla el número, su magnitud y su ángulo
    for(int i = 0; i < 10; i++) {
        cout << "Número " << i+1 << ": " << numeros[i].re << " + " << numeros[i].im << "i" << endl;
        cout << "Magnitud: " << magnitud(numeros[i]) << endl;
        cout << "Ángulo (radianes): " << angulo(numeros[i]) << endl;
    }

     // Encontrar el número con mayor magnitud
    double max_magnitud = magnitud(numeros[0]);
    int indice_max_magnitud = 0;
    for(int i = 1; i < 10; i++) {
        double magnitud_actual = magnitud(numeros[i]);
        if(magnitud_actual > max_magnitud) {
            max_magnitud = magnitud_actual;
            indice_max_magnitud = i;
        }
    }

    // Encontrar el número con mayor ángulo
    double max_angulo = angulo(numeros[0]);
    int indice_max_angulo = 0;
    for(int i = 1; i < 10; i++) {
        double angulo_actual = angulo(numeros[i]);
        if(angulo_actual > max_angulo) {
            max_angulo = angulo_actual;
            indice_max_angulo = i;
        }
     }

    // Mostrar en pantalla el número con mayor magnitud y el número con mayor ángulo
    cout << "Número con mayor magnitud: " << numeros[indice_max_magnitud].re << " + " << numeros[indice_max_magnitud].im << "i" << endl;
    cout << "Magnitud máxima: " << max_magnitud << endl;
    cout << "Número con mayor ángulo: " << numeros[indice_max_angulo].re << " + " << numeros[indice_max_angulo].im << "i" << endl;
    cout << "Ángulo máximo (radianes): " << max_angulo << endl;
    } 
  return 0;
}








