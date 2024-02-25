#include <iostream>
#include <fstream>
#include <string>
# include <cmath>

using namespace std;
struct complex{
    double re, im;
};


// Crear una función que calcule la magnitud del número complejo

double magnitud(const complex& c) {
    return sqrt(pow(c.re, 2) + pow(c.im, 2));
}


// Crear una funcion que calcule el ángulo del número complejo
double angulo(const complex& c) {
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
  int  datos_int[20]={0}; //  Agregar un vector para almacenar los números convertidos.

  if(archivo.is_open()){
    for(int i = 0; i < 20; i++){
      getline(archivo, path);
      datos_int[i] = stoi( path );
      cout << datos_int[i] << endl;
    }

    // Con los datos que se van a cargar, crear un vector de 10 complejos que usen la estructura
   
    complex numeros_comp[10];
    for (int i = 0; i < 10; i++) {
            complex c;
            numeros_comp[i].re = datos_int[2*i];
            numeros_comp[i].im = datos_int[2*i + 1];
            

            // Mostrar en pantalla el número, su magnitud y su ángulo;
            cout << "Número: " << c.re << " + " << c.im << "i, ";
            cout << "Magnitud: " << magnitud(c) << ", ";
            cout << "Ángulo: " << angulo(c) << " rad" << endl;
        }


    
    // Encontrar el número con mayor magnitud y el número con mayor ángulo
    // y mostrarlos en la pantalla.

     
        double maxMagnitude = 0;
        complex maxMagnitudeNumber;

        for (const complex& c : numeros_comp) {
            double magnitude = magnitud(c);
            if (magnitude > maxMagnitude) {
                maxMagnitude = magnitude;
                maxMagnitudeNumber = c;
            }
        }

        
        double maxAngle = 0;
        complex maxAngleNumber;

        for (const complex& c : numeros_comp) {
            double angle = angulo(c);
            if (angle > maxAngle) {
                maxAngle = angle;
                maxAngleNumber = c;
            }
        }

      
        cout << "Número con mayor magnitud: " << maxMagnitudeNumber.re << " + " << maxMagnitudeNumber.im << "i" << endl;
        cout << "Número con mayor ángulo: " << maxAngleNumber.re << " + " << maxAngleNumber.im << "i" << endl;











  
  }
  return 0;
}







