// Franco Benegas

#include <iostream>
using namespace std;

int main() {
    float num, suma = 0;

    // Solicitar números hasta que el usuario ingrese un número negativo
    cout << "Ingresa numeros. Para terminar, ingresa un numero negativo." << endl;

    while (true) {
        cout << "Ingresa un numero: ";
        cin >> num;

        if (num < 0) {
            break;
        }

        suma += num;
    }

    // Imprimir la suma de todos los números
    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}
