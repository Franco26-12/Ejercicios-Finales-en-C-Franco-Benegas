// Franco Benegas

#include <iostream>
using namespace std;

// Funci�n que recibe dos n�meros enteros y devuelve su suma
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Solicitar los n�meros al usuario
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    // Llamar a la funci�n y mostrar la suma
    int resultado = sumar(num1, num2);
    cout << "La suma es: " << resultado << endl;

    return 0;
}
