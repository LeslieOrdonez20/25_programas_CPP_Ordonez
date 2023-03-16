#include <iostream>
//Dada una medida angular mayor que 0 grados pero menor que 180 grados, clasificar el ángulo como obtuso, recto o agudo
using namespace std;

int main()
{
    float angle;

    cout << "Ingrese el ángulo en grados: ";
    cin >> angle;

    if (angle > 0 && angle < 90) {
        cout << "El ángulo es agudo" << endl;
    } else if (angle == 90) {
        cout << "El ángulo es recto" << endl;
    } else if (angle > 90 && angle < 180) {
        cout << "El ángulo es obtuso" << endl;
    } else {
        cout << "El ángulo ingresado no es válido" << endl;
    }

    return 0;
}
