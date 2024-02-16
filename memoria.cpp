#include <iostream>

int main(){
    int a;
    float b;
    long c;
    double d;

    std::cout << "El tamaño de a es: " << sizeof( a ) << std::endl;
    std::cout << "El tamaño de b es: " << sizeof( b ) << std::endl;
    std::cout << "El tamaño de c es: " << sizeof( c ) << std::endl;
    std::cout << "El tamaño de d es: " << sizeof( d ) << std::endl;

    std::cout << "La dirección de a es: " << &a << std::endl;
    std::cout << "La dirección de b es: " << &b << std::endl;
    std::cout << "La dirección de c es: " << &c << std::endl;
    std::cout << "La dirección de d es: " << &d << std::endl;

    std::cout << "El contenido de a es: " << a << std::endl;
    std::cout << "El contenido de b es: " << b << std::endl;
    std::cout << "El contenido de c es: " << c << std::endl;
    std::cout << "El contenido de d es: " << d << std::endl;
    // int* p = &a;
    char* p = (char*) &a;
  std::cout << "La dirección de p es: " << &p << " y su contenido es: " << p << std::endl;
  std::cout << "Su tamaño es: " << sizeof( p ) << " y el valor al que apunta es: " << *p << std::endl;

    p++;
  std::cout << "La dirección de p es: " << &p << " y su contenido es: " << p << std::endl;
  std::cout << "Su tamaño es: " << sizeof( p ) << " y el valor al que apunta es: " << *p << std::endl;

    int e[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << &e << ", " << &e[0] << ", " << &e[1] << std::endl; 

    int* ptr = e;
    for(int i = 0; i < 10; i++){
        std::cout << *ptr++ << std::endl;
    }

    return 0;
}








