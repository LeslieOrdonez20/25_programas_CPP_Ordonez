#include <iostream>
//imprimir la tabla de multiplicar hasta 12x12
using namespace std;

int main() {
   for(int i = 1; i <= 12; i++) {
      for(int j = 1; j <= 12; j++) {
         cout << i*j << "\t"; //imprime la multiplicación y una tabulación
      }
      cout << endl; //cada vez que termina una fila, hace un salto de línea
   }
   return 0;
}
