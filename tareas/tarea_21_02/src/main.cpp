#include <iostream>
#include "punto.cpp"

using namespace std;

int main()
{
    cout << "Ingrese las coordenadas del punto 1: " << endl;
    punto punto1; //define punto 1
    cin >> punto1.x >> punto1.y; //usuario ingresa coordenadas punto 1
    punto punto2; //define punto 2
    cout << "Ingrese las coordenadas del punto 2: " << endl;
    cin >> punto2.x >> punto2.y; //usuario ingresa coordenadas punto 2

    punto suma = punto1 + punto2;
    
    cout << "La suma en x es: " << suma.x << " y la suma en y es: " << suma.y << "." << endl; //imprime la suma

    return 0;
}