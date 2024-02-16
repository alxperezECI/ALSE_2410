#include <iostream>

using namespace std;

// Este programa sirve para invertir el contenido de un vector

int main(){
    int a[10];
    int b[10];
    int c[10];
    int  *ptr1, *ptr2;

    cout << "Ingresar 10 números enteros:" << endl;
    for( int i = 0; i < 10; i++ ) cin >> a[i];

    // inviertiendo en orden en b
    for( int i = 0; i < 10; i++ ) b[9-i] = a[i];

    // inviertiendo el orden con los punteros
    ptr1 = &a[9];
    ptr2 = &c[0];

    for(int i = 0; i < 10; i++ ) *ptr2++ = *ptr1--;

    // Imprimiendo  b y c
    cout << "a\tb\tc" << endl;
    for(int i = 0; i < 10; i++ )
        cout << a[i] << "\t" << b[i] << "\t" << c[i] << endl;

    return 0;
}








