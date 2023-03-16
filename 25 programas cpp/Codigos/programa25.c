#include <iostream>
#include <cstdlib>  // para la función rand()

int main() {
    const int NUM_MONEDAS = 6;
    const int NUM_TIROS = 1000;

    // Inicializar el generador de números aleatorios
    srand(time(0));

    // Inicializar el contador de cada resultado
    int conteo[NUM_MONEDAS + 1] = {};  // inicializar todos los elementos a cero

    // Realizar los tiros
    for (int i = 0; i < NUM_TIROS; i++) {
        int num_caras = 0;
        for (int j = 0; j < NUM_MONEDAS; j++) {
            if (rand() % 2 == 0) {  // si el número aleatorio es par, es cara
                num_caras++;
            }
        }
        conteo[num_caras]++;  // incrementar el contador correspondiente
    }

    // Imprimir los resultados
    std::cout << "Distribución de tiros:" << std::endl;
    for (int i = 0; i <= NUM_MONEDAS; i++) {
        std::cout << i << " caras: " << conteo[i] << std::endl;
    }

    return 0;
}