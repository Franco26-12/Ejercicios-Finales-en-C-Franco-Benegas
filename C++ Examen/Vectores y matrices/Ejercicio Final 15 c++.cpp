// Franco Benegas

#include <iostream>
using namespace std;

int main() {
    int matriz1[2][2], matriz2[2][2], resultado[2][2];

    // Solicitar al usuario que ingrese los elementos de la primera matriz
    cout << "Ingresa los elementos de la primera matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento en posicion [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // Solicitar al usuario que ingrese los elementos de la segunda matriz
    cout << "\nIngresa los elementos de la segunda matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento en posicion [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Inicializamos la matriz resultado en cero
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = 0;
        }
    }

    // Multiplicar las matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Imprimir el resultado de la multiplicación
    cout << "\nEl resultado de la multiplicacion de las matrices es:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
