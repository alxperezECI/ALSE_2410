#include"punto.h"

using namespace std;

//Uso de la sobrecarga de operadores ya hechos.
int main()
{
    //Defino el tipo de dato de a y b.
    punto a;
    punto b;
    //Sumo las variables y obtengo un punto.
    punto suma = a + b;

    //Imprimo la suma.
    cout << "La suma es: " << "(" << suma.x << "," << suma.y << ")." << endl;

    //Imprimo b con el operador << sobrecargado.
    cout << "El punto b es: " << "" << endl;
    
    return 0;
}