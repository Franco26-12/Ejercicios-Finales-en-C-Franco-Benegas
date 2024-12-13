// Franco Benegas

#include <iostream>
using namespace std;

// Función que recibe dos números enteros y devuelve su suma
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Solicitar los números al usuario
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    // Llamar a la función y mostrar la suma
    int resultado = sumar(num1, num2);
    cout << "La suma es: " << resultado << endl;

    return 0;
}
