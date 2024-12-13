// Franco Benegas
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Solicitar dos números
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    // Usar booleanos para determinar cuál es mayor o si son iguales
    bool esMayor = num1 > num2;
    bool esMenor = num1 < num2;
    bool sonIguales = num1 == num2;

    // Mostrar resultados basados en los valores booleanos
    cout << (esMayor ? "El primer numero es mayor." :
              (esMenor ? "El segundo numero es mayor." : "Ambos numeros son iguales.")) << endl;

    return 0;
}
