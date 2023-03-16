#include <iostream>
using namespace std;
//probar un numero para determinar si es primo imprimir primo cuando lo sea y no primo cuando no lo sea
int main() {
    int num, i;
    bool isPrime = true;

    cout << "Ingrese un numero entero positivo: ";
    cin >> num;

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << num << " es un numero primo." << endl;
    else
        cout << num << " no es un numero primo." << endl;

    return 0;
}
