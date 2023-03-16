#include <iostream>
#include <cmath>
//Calcular la suma de las raices cuadradas de los numeros impares que hay entre 1 y 1,000
using namespace std;

int main() {
    double suma = 0;
    
    for (int i = 1; i <= 1000; i += 2) {
        suma += sqrt(i);
    }
    
    cout << "La suma de las raices cuadradas de los numeros impares del 1 al 1000 es: " << suma << endl;
    
    return 0;
}
