// Franco Benegas

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Solicitar los números al usuario
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    // Realizar y mostrar las operaciones
    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;

    return 0;
}
