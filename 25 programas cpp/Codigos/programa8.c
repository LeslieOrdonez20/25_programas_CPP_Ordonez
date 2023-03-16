#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double dolares;
    
    cout << "Introduce la cantidad de dolares: ";
    cin >> dolares;
    
    int centavos = round(dolares * 100);
    
    int monedas25 = centavos / 25;
    centavos %= 25;
    
    int monedas10 = centavos / 10;
    centavos %= 10;
    
    int monedas5 = centavos / 5;
    centavos %= 5;
    
    int monedas1 = centavos;
    
    cout << "La cantidad de monedas equivalentes son: \n"
         << monedas25 << " monedas de 25 centavos\n"
         << monedas10 << " monedas de 10 centavos\n"
         << monedas5 << " monedas de 5 centavos\n"
         << monedas1 << " monedas de 1 centavo" << endl;
    
    return 0;
}
