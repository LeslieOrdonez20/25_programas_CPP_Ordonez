#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Dimensiones de la pared en metros
    double largo = 1.0;
    double ancho = 0.5;
    double altura = 1.1;

    // Dimensiones de cada azulejo en centímetros
    int lado_azulejo = 11;

    // Cálculo del número de azulejos necesarios
    int num_azulejos_largo = ceil(largo * 100 / lado_azulejo);
    int num_azulejos_ancho = ceil(ancho * 100 / lado_azulejo);
    int num_azulejos_altura = ceil(altura * 100 / lado_azulejo);
    int num_total_azulejos = num_azulejos_largo * num_azulejos_ancho * num_azulejos_altura;

    // Salida del resultado
    cout << "Se necesitan " << num_total_azulejos << " azulejos para cubrir la pared." << endl;

    return 0;
}
