#include <iostream>

//incluimos las clases de las figuras
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono.h"

//libreria para leer documentos
#include <fstream> 

using namespace std; //para evitar usar std::

int main(int argc, char** argv){
    Geometrica* vFig[20]; //vector de punteros tipo geometrica de 20 espacios
    Geometrica* pG = 0;  //puntero tipo geometrica que inicia en 0

    if(argc != 2){ //si no se incluyen dos parametros (ejecutable y archivo a leer) lee esto
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
        while(!archivo.eof()){
            posicion = path.find(" ", posicion);
            cout << path << " -> " << posicion <<endl;
            tipo = atoi(path.substr(0, posicion).c_str()); //atoi convierte cadena de caracteres en enteros
            switch (tipo) { //dependiendo del caso se llamara a una u otra clase
            case circulo:
                pG = new Circulo(path.substr(posicion + 1));
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

	    vFig[cant++] = pG; //ingresa al vector los datos obtenidos
            getline(archivo, path);
        }
        cout << cant << endl;
    }
    for( int i = 0; i < cant; i++){ //for para recoerrer el arreglo vFig
      cout << "Área: " << vFig[i]->area() << endl; //imprime las áreas
      cout << "Perímetro: " << vFig[i]->perimetro() << endl; //imprime los perímetros
    }
    return 0;
}
