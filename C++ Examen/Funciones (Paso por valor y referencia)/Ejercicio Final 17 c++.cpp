// Franco Benegas

#include <iostream>
using namespace std;

// Función para intercambiar los valores de dos variables
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    // Solicitar los números al usuario
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    // Mostrar los valores antes del intercambio
    cout << "Antes del intercambio:" << endl;
    cout << "Numero 1: " << num1 << ", Numero 2: " << num2 << endl;

    // Llamar a la función para intercambiar los valores
    intercambiar(num1, num2);

    // Mostrar los valores después del intercambio
    cout << "Despues del intercambio:" << endl;
    cout << "Numero 1: " << num1 << ", Numero 2: " << num2 << endl;

    return 0;
}
