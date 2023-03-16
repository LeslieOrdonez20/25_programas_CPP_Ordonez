#include <iostream>
//imprimir una tabla de potencias del 2 que no exceda al 1,000
using namespace std;

int main() {
    int n = 1;
    while (n <= 1000) {
        cout << n << endl;
        n = n * 2;
    }
    return 0;
}
