#include <iostream>
using namespace std;

int main() {
    float dist, time1, time2, speed1, speed2;

    cout << "Ingrese la distancia entre las dos personas (en kilómetros): ";
    cin >> dist;
    cout << "Ingrese el tiempo que la primera persona ha estado viajando (en horas): ";
    cin >> time1;
    cout << "Ingrese el tiempo que la segunda persona ha estado viajando (en horas): ";
    cin >> time2;

    speed1 = dist / time1; // velocidad de la primera persona
    speed2 = dist / time2; // velocidad de la segunda persona

    float relativeSpeed = speed1 - speed2; // velocidad relativa entre las dos personas

    if (relativeSpeed < 0) {
        cout << "La segunda persona ya ha llegado a su destino, la primera persona no podrá alcanzarla." << endl;
        return 0;
    }

    float timeToCatchUp = dist / relativeSpeed; // tiempo para alcanzar a la segunda persona
    float requiredSpeed = dist / (time1 + timeToCatchUp); // velocidad requerida para alcanzar a la segunda persona

    cout << "Para alcanzar a la segunda persona, la primera persona debe viajar a una velocidad de " << requiredSpeed << " km/h." << endl;

    return 0;
}