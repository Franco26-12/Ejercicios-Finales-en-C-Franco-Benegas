// Franco Benegas

#include <iostream>
using namespace std;

int main() {
    int operacion;
    double num1, num2;

    // Mostrar menú de operaciones
    cout << "Menu de operaciones matematicas:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Elige una operacion (1-4): ";
    cin >> operacion;

    // Solicitar dos números
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    // Usar switch para realizar la operación seleccionada
    switch (operacion) {
        case 1:
            cout << "Resultado de la suma: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado de la resta: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado de la multiplicacion: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado de la division: " << num1 / num2 << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Opcion invalida. Elige un numero entre 1 y 4." << endl;
    }

    return 0;
}
