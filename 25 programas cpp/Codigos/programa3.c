#include <iostream>
//convertir pulgadas a yardas y pies a pulgadas
using namespace std;

int main() {
    double pulgadas, yardas, pies;
    
    // Pedimos al usuario que ingrese el valor en pulgadas
    cout << "Ingrese la cantidad de pulgadas: ";
    cin >> pulgadas;
    
    // Convertimos pulgadas a yardas y mostramos el resultado
    yardas = pulgadas / 36.0;
    cout << "El resultado en yardas es: " << yardas << endl;
    
    // Convertimos pies a pulgadas y mostramos el resultado
    pies = pulgadas / 12.0;
    pulgadas = pulgadas - (pies * 12.0);
    cout << "El resultado en pies y pulgadas es: " << pies << " pies " << pulgadas << " pulgadas" << endl;
    
    return 0;
}
