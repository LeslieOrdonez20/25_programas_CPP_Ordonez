#include <iostream>
using namespace std;

// Función para encontrar el máximo común divisor
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2, num3, result;
    cout << "Ingrese tres numeros separados por un espacio: ";
    cin >> num1 >> num2 >> num3;
    result = gcd(num1, gcd(num2, num3)); // Encuentra el MCD utilizando la función gcd()
    cout << "El maximo comun divisor de los tres numeros es: " << result;
    return 0;
}
