#include <iostream>
using namespace std;

int main() {
    float angulo1, angulo2, anguloExt;
    cout << "Ingrese la medida de uno de los ángulos interiores opuestos del triángulo: ";
    cin >> angulo1;
    cout << "Ingrese la medida del otro ángulo interiores opuestos del triángulo: ";
    cin >> angulo2;
    anguloExt = 180 - (angulo1 + angulo2);
    cout << "La medida del ángulo externo correspondiente es: " << anguloExt << endl;
    return 0;
}
