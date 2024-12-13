// Franco Benegas
#include <iostream>
using namespace std;

int main() {
    int opcion;
    double numero;
    do {
        // Mostrar el menú
        cout << "Menu:\n";
        cout << "1. Calcular el cuadrado de un numero.\n";
        cout << "2. Calcular el cubo de un numero.\n";
        cout << "3. Salir.\n";
        cout << "Elige una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> numero;
                cout << "El cuadrado de " << numero << " es " << numero * numero << endl;
                break;
            case 2:
                cout << "Ingresa un numero: ";
                cin >> numero;
                cout << "El cubo de " << numero << " es " << numero * numero * numero << endl;
                break;
            case 3:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opcion no valida. Intenta de nuevo.\n";
                break;
        }
        cout << endl; // Línea vacía para separación en el menú
    } while (opcion != 3);

    return 0;
}


