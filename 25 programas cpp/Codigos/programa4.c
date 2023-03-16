#include <iostream>
//determina si un entero dado es múltiplo de 6
using namespace std;

int main() {
   int num;
   cout << "Ingrese un entero: ";
   cin >> num;

   if (num % 6 == 0) {
      cout << num << " es un múltiplo de 6";
   } else {
      cout << num << " no es un múltiplo de 6";
   }
   
   return 0;
}
