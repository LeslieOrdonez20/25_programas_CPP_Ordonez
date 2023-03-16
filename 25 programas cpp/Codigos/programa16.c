#include <iostream>
#include <cmath>
using namespace std;
//Dados los tres lados A, B y C de un triangulo encontrar los tres angulos a, byc, suponer que todos los angulos son agudos
int main() {
    float A, B, C, a, b, c;

    cout << "Ingrese el lado A del triangulo: ";
    cin >> A;
    cout << "Ingrese el lado B del triangulo: ";
    cin >> B;
    cout << "Ingrese el lado C del triangulo: ";
    cin >> C;

    a = acos((B*B + C*C - A*A) / (2*B*C)) * 180.0 / M_PI;
    b = acos((C*C + A*A - B*B) / (2*C*A)) * 180.0 / M_PI;
    c = acos((A*A + B*B - C*C) / (2*A*B)) * 180.0 / M_PI;

    cout << "Los angulos del triangulo son: " << endl;
    cout << "a = " << a << " grados" << endl;
    cout << "b = " << b << " grados" << endl;
    cout << "c = " << c << " grados" << endl;

    return 0;
}
