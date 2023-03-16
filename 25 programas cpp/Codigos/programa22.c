#include <iostream>

using namespace std;

int main() {
    float altura, base_mayor, base_menor, area;
    
    cout << "Introduzca la altura del trapecio: ";
    cin >> altura;
    
    cout << "Introduzca la longitud de la base mayor: ";
    cin >> base_mayor;
    
    cout << "Introduzca la longitud de la base menor: ";
    cin >> base_menor;
    
    area = (base_mayor + base_menor) * altura / 2;
    
    cout << "El area del trapecio es: " << area << endl;
    
    return 0;
}
