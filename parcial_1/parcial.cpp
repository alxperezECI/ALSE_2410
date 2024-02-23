#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct complex{
    double re, im;
};

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









  
  }
  return 0;
}








