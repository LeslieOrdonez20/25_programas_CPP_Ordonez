#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const double pi = acos(-1); // Valor de pi
  const double deg_to_rad = pi / 180.0; // Factor de conversión de grados a radianes

  double angulos[4] = {30.0, 45.0, 60.0, 90.0}; // Ángulos en grados
  double senos[4], cosenos[4]; // Arrays para almacenar los valores de seno y coseno

  for(int i = 0; i < 4; i++) {
    double angulo_radianes = angulos[i] * deg_to_rad; // Convertir el ángulo a radianes
    senos[i] = sin(angulo_radianes); // Calcular el seno
    cosenos[i] = cos(angulo_radianes); // Calcular el coseno
  }

  // Imprimir los resultados
  for(int i = 0; i < 4; i++) {
    cout << "Ángulo: " << angulos[i] << " grados" << endl;
    cout << "Seno: " << senos[i] << endl;
    cout << "Coseno: " << cosenos[i] << endl << endl;
  }

  return 0;
}
