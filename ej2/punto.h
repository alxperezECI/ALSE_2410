#include<iostream>

using namespace std;

//sobrecarga de operadores + y <<.

struct punto
{
    float x;
    float y;

};

punto operator+(const punto &a, const punto &b )
{
    punto res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    return res;

}

/*
ostream& operator<<(ostream &out, const punto &b)
{
    cout << "(" << b.x << "," << b.y << ")" << endl;
    return cout;
}*/