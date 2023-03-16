#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double hipotenusa, cateto, angulo;
    cout << "Ingrese la longitud de la hipotenusa: ";
    cin >> hipotenusa;
    cout << "Ingrese la longitud de un cateto: ";
    cin >> cateto;

    // Calculamos el ángulo
    angulo = asin(cateto / hipotenusa);

    // Calculamos el seno, coseno y tangente del ángulo
    double seno = sin(angulo);
    double coseno = cos(angulo);
    double tangente = tan(angulo);

    // Imprimimos los resultados
    cout << "El ángulo es " << angulo << " radianes" << endl;
    cout << "El seno del ángulo es " << seno << endl;
    cout << "El coseno del ángulo es " << coseno << endl;
    cout << "La tangente del ángulo es " << tangente << endl;

    return 0;
}
