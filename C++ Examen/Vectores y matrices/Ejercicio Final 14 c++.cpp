// Franco Benegas

#include <iostream>
using namespace std;

int main() {
    int matriz[2][2];
    int suma = 0;

    // Solicitar al usuario que ingrese los elementos de la matriz 2x2
    cout << "Ingresa los elementos de la matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento en posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            suma += matriz[i][j]; // Acumulando la suma de los elementos
        }
    }

    // Imprimir la suma de los elementos
    cout << "\nLa suma de los elementos de la matriz es: " << suma << endl;

    return 0;
}
