#include <iostream>

using namespace std;

struct punto_st{
    float x, y;
    punto_st(){
      x = y = 0.0;
    }
    
    punto_st operator+( const punto_st &a ){
      punto_st res;
      res.x = x + a.x;
      res.y = y + a.y;
      
      return res;
    }

    punto_st& operator+=( punto_st &a ){
        x += a.x;
        y += a.y;
        return *this;
    }
};    

/*
punto_st operator+(const punto_st &a, const punto_st &b){
    punto_st res;
    // No se pueden modificar los parámetros ya que son de solo lectura    a.x = 8.;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    return res;
}

punto_st& operator+=( punto_st &a, const punto_st &b){
    a.x += b.x;
    a.y += b.y;
    return a;
}
*/
ostream& operator<<(ostream &out, const punto_st &b){
    out << "( " << b.x << ", " << b.y << " )";
    return out;
}










