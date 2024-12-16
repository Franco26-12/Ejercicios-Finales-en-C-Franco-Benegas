// Franco Benegas
#include <iostream>
#include <string>
using namespace std;



string encriptar(string palabra, int clave) {
  string resultado = "";

    for (int i = 0; i < palabra.length(); i++) {
        char caracter = palabra[i];

        if (caracter >= 'a' && caracter <= 'z') {
            caracter = 'a' + (caracter - 'a' + clave) % 26;
        } else if (caracter >= 'A' && caracter <= 'Z') {
            caracter = 'A' + (caracter - 'A' + clave) % 26;
        }

        resultado += caracter;
    }

    return resultado;
}

int main() {
    string palabra;
    int clave;

    cout << "Ingrese la palabra a encriptar: ";
    cin >> palabra;

    cout << "Ingrese la clave (1-5): ";
    cin >> clave;

    while (clave < 1 || clave > 5) {
        cout << "Clave inválida. Ingrese una clave entre 1 y 5: ";
        cin >> clave;
    }

    string encriptada = encriptar(palabra, clave);

    cout << "Palabra encriptada: " << encriptada << endl;

    return 0;
}
