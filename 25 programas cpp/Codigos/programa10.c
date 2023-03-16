#include <iostream>
// Introducir 12 valores de A y 10 de B. calcular la suma de los valores A, la de los B, y la suma de los productos AB
using namespace std;

int main() {
    int a[12], b[10]; // declarar dos arreglos de enteros de tamaño 12 y 10, respectivamente
    int sumA = 0, sumB = 0, sumAB = 0; // inicializar las variables de suma

    // Pedir los valores de A
    cout << "Introduce los valores de A:" << endl;
    for (int i = 0; i < 12; i++) {
        cout << "A[" << i << "]: ";
        cin >> a[i];
        sumA += a[i]; // sumar el valor actual de A a la variable de suma
    }

    // Pedir los valores de B
    cout << "Introduce los valores de B:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "B[" << i << "]: ";
        cin >> b[i];
        sumB += b[i]; // sumar el valor actual de B a la variable de suma
    }

    // Calcular la suma de los productos AB
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 10; j++) {
            sumAB += a[i] * b[j]; // sumar el producto actual de A y B a la variable de suma
        }
    }

    // Imprimir los resultados
    cout << "La suma de los valores de A es: " << sumA << endl;
    cout << "La suma de los valores de B es: " << sumB << endl;
    cout << "La suma de los productos AB es: " << sumAB << endl;

    return 0;
}
