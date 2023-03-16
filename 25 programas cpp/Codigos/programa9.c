#include <iostream>
//Imprimir la suma y el producto de todos los posibles pares diferentes de enteros del 15 al 20
using namespace std;

int main() {
    int suma = 0;
    int producto = 1;

    for(int i = 15; i <= 20; i++) {
        for(int j = i+1; j <= 20; j++) {
            suma += i + j;
            producto *= i * j;
        }
    }

    cout << "La suma de todos los posibles pares diferentes de enteros del 15 al 20 es: " << suma << endl;
    cout << "El producto de todos los posibles pares diferentes de enteros del 15 al 20 es: " << producto << endl;

    return 0;
}
