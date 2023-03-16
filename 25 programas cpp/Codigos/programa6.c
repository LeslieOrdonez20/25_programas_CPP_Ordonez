#include <iostream>
//Introducir un entero n positivo, encontrar la suma de los n numeros, imprimir cada uno de los enteros y la suma
using namespace std;

int main() {
    int n, suma = 0;
    
    cout << "Introduce un entero positivo: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        suma += i;
        cout << i << " ";
    }
    
    cout << "\nLa suma de los " << n << " numeros es: " << suma << endl;
    
    return 0;
}
