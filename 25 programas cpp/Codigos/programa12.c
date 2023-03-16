#include <iostream>
#include <cmath>
//imprimir una tabla de cuadrados, cubos y raices fuertes de los 20 primeros numeros
using namespace std;

int main() {
    int n = 20;
    cout << "Numero\tCuadrado\tCubo\tRaiz cuadrada\n";
    for(int i = 1; i <= n; i++) {
        cout << i << "\t" << pow(i, 2) << "\t\t" << pow(i, 3) << "\t" << sqrt(i) << endl;
    }
    return 0;
}
