// Franco Benegas

#include <iostream>
using namespace std;

int main() {
    int num;

    // Solicitar un número
    cout << "Ingresa un numero: ";
    cin >> num;

    // Usar if-else para determinar si es positivo, negativo o cero
    if (num > 0) {
        cout << "El numero es positivo." << endl;
    } else if (num < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }

    return 0;
}
