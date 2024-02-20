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

    int sumax = punto1.x + punto2.x; //suma coordenada x
    int sumay = punto1.y + punto2.y; //suma coordenada y
    
    cout << "La suma en x es: " << sumax << " y la suma en y es: " << sumay << "." << endl; //imprime la suma

    return 0;
}