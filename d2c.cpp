#include <iostream>
#include <cmath>

int main(){
    double dato = M_PI;;

    std::cout << "El contenido de dato es: " << dato  << " " ;
    std::cout << std::hex << dato << std::endl;
    // int* p = &a;
    char* ptr = (char*) &dato;

    for( int i = 0; i < 8; i++)
      std::cout << *ptr << " " << std::hex << (int)*ptr++ << std::endl ;

    std::cout << std::endl;
  
    return 0;
}








