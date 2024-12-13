// Franco Benegas

#include <iostream>
using namespace std;

// Función para calcular el mayor de tres números
void calcularMayor(int a, int b, int c, int & mayor) {
    if (a > b && a > c) {
        mayor = a;
    } else if (b > a && b > c) {
        mayor = b;
    } else {
        mayor = c;
    }
}

int main() {
    int num1, num2, num3, mayor;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cout << "Ingresa el tercer numero: ";
    cin >> num3;

    // Llamar a la función para calcular el mayor
    calcularMayor(num1, num2, num3, mayor);

    // Mostrar el resultado
    cout << "El mayor de los tres numeros es: " << mayor << endl;

    return 0;
}
