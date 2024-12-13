// Franco Benegas
#include <iostream>
#include <cmath>
#define PI 3.1416
using namespace std;

int main() {
    double radio;

    // Solicitar el radio
    cout << "Ingresa el radio del circulo: ";
    cin >> radio;


    // Calcular área y circunferencia
    double area = PI * pow(radio, 2);
    double circunferencia = 2 * PI * radio;

    // Mostrar resultados
    cout << "Area: " << area << endl;
    cout << "Circunferencia: " << circunferencia << endl;

    return 0;
}
