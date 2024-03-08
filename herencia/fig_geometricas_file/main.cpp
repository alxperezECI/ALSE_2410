/*
Se usara en el siguiente ejercicio la función de clases en C++ con el fin de entender la herencia.
El siguiente codigo calcula el área y el perímetro del 4 figuras geometrcas, en el cual los datos serán 
extraidos de un archivo tipo .txt.
*/

#include <iostream>
#include "Circulo.h" // Se incluye cada uno de los archivos .h para que de esta forma el computador sepa en donde buscar las clases.
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono.h"
#include <fstream> // Se incluye "fstream" para poder leer documentos.

using namespace std;

int main(int argc, char** argv){
    Geometrica* vFig[20]; // Se crea un areglo de punteros de tipo Geometrica.
    Geometrica* pG = 0; // Se crea un puntero de tipo Geometrica que se inicializa en 0.

    if(argc != 2){ // Si no se indica la ruta del documento a leer no correra el programa.
        cout << "El programa se usa así:" << endl;
        cout << "fig_geometricas_file path_to_file" << endl;
        cout << "Se debe indicar la ruta al archivo a leer" << endl;
        return 1;
    }

    string path;
    path = argv[1];
    ifstream archivo;
    archivo.open(path);

    cout << "Se abrirá el archivo: " << path << endl;

    int tipo = 0, cant = 0;
    size_t posicion = 0;
    if(archivo.is_open()){
        // Aquí va el codigo que se va a hacer para leer el archivo
        getline(archivo, path);
        while(!archivo.eof()){ // Dependiendo de cual caso, se ingreserán los datos del tipo de figura en el vector vFig[].
            posicion = path.find(" ", posicion);
            cout << path << " -> " << posicion <<endl;
            tipo = atoi(path.substr(0, posicion).c_str()); // Usando la funión "atoi" se convierte una la cadena de ccracteres en una entero.
            switch (tipo) {  // Se llama a cada una de las clases dependiendo el caso.
            case circulo:
                pG = new Circulo(path.substr(posicion + 1)); // Las clases cuentan con su propio lector de texto para extraer los datos de las lineas de codigo. 
                break;
            case cuadrado:
                pG = new Cuadrado(path.substr(posicion + 1));
                break;
            case triangulo:
                pG = new Triangulo(path.substr(posicion + 1));
                break;
            case pentagono:
                pG = new Pentagono(path.substr(posicion + 1));
                break;
            default:
                break;
            }

	    vFig[cant++] = pG; // Ingresa los datos obtenidos al leer el codigo en el vector vFig[].
            getline(archivo, path);
        }
        cout << cant << endl;
    }
    for( int i = 0; i < cant; i++){
      cout << "Area: " << vFig[i]->area() << " Perimetro: " <<vFig[i]->perimetro() << endl; // Se imripme el área y perímetro de cada uno de los tipos de figuras ingresadas en el vector vFig[]
    }
    return 0;
}
