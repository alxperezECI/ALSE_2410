#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;
struct complex{
    double re, im;
};

double mag(double im, double re){
  double mag_ = im*im + re*re;
  mag_ = sqrt(mag_);
  return mag_;
}

double ag(double im, double re){
  double ag_ = im/re;
  ag_ = atan(ag_);
  return ag_;
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
  complex numeros_complejos[10];
  complex max_mag, max_ag;
  double mag_max = 0,ag_max = 0;
  for (int i = 0; i<10 ; i++){
    numeros_complejos[i].re = datos_int[2*i];
    numeros_complejos[i].im = datos_int[2*i+1];
    double angulo = ag(numeros_complejos[i].im, numeros_complejos[i].re);
    double magnitud = mag(numeros_complejos[i].im, numeros_complejos[i].re);
    cout<<"El númro complejo es: "<<numeros_complejos[i].re<<" + "<<numeros_complejos[i].im<<"i"<<endl; 
    cout<<"La magntud es: "<<magnitud<<endl;
    cout<<"El ángulo es: "<<angulo<<"rad"<<endl;
    if(magnitud > mag_max){
      mag_max = magnitud;
      max_mag = numeros_complejos[i];
    }
    if(angulo > ag_max){
      ag_max = angulo;
      max_ag = numeros_complejos[i];
    }
  }
  cout<<"El numero con mayor magnitud es: "<<max_mag.re<<" + "<<max_mag.im<<"i"<<endl; 
  cout<<"El numero con mayor ángulo es: "<<max_ag.re<<" + "<<max_ag.im<<"i"<<endl; 








  
  }
  return 0;
}








