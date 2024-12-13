// Franco Benegas

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num1, num2, num3;

    // Solicitar tres n�meros
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cout << "Ingresa el tercer numero: ";
    cin >> num3;

    // Calcular el promedio como un entero
    int promedio = (num1 + num2 + num3) / 3;  // Divisi�n entera

    // Calcular el n�mero mayor y el menor
    int mayor = max({num1, num2, num3});
    int menor = min({num1, num2, num3});

    // Mostrar resultados
    cout << "Promedio: " << promedio << endl;
    cout << "Diferencia entre el mayor y el menor: " << mayor - menor << endl;

    return 0;
}
