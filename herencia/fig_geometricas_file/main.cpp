#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono.h"
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char** argv){
    vector<Geometrica*> vFig;
    Geometrica* pG = 0;

    if(argc != 2){
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

    int tipo = 0;
    size_t posicion = 0;
    if(archivo.is_open()){
        // Aquí va el codigo que se va a hacer para leer el archivo
        getline(archivo, path);
        while(!archivo.eof()){
            posicion = path.find(" ", posicion);
            cout << path << "-> " << posicion <<endl;
            tipo = atoi(path.substr(0, posicion).c_str());
            switch (tipo) {
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
			vFig.push_back( pG );
            getline(archivo, path);
        }
        cout << vFig.size() << endl;
    }

    return 0;
}
