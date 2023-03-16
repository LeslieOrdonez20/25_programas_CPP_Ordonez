#include <iostream>
#include <cmath>

using namespace std;
//Encontrar el tercer lado de un triángulo rectángulo mediante el teorema de Pitágoras
int main() {
    double a, b, c;

    cout << "Ingresa la longitud de los dos catetos del triángulo rectángulo: " << endl;
    cin >> a >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "La longitud de la hipotenusa es: " << c << endl;

    return 0;
}
