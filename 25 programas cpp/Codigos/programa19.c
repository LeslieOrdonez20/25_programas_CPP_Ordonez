#include <iostream>
//Encontrar el área de cualquier rectángulo con la fórmula área= lw donde l es la longitud y w es el ancho
using namespace std;

int main() {
    float length, width, area;

    cout << "Ingrese la longitud del rectángulo: ";
    cin >> length;

    cout << "Ingrese el ancho del rectángulo: ";
    cin >> width;

    area = length * width;

    cout << "El área del rectángulo es: " << area << endl;

    return 0;
}
