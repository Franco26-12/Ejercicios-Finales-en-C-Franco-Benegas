// Franco Benegas
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5, referencia;

    // Solicitar cinco números
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cout << "Ingresa el tercer numero: ";
    cin >> num3;
    cout << "Ingresa el cuarto numero: ";
    cin >> num4;
    cout << "Ingresa el quinto numero: ";
    cin >> num5;

    // Solicitar el número de referencia
    cout << "Ingresa el numero de referencia: ";
    cin >> referencia;

    // Usar booleanos para verificar si todos los números son mayores que la referencia
    bool todosMayores = (num1 > referencia) && (num2 > referencia) && (num3 > referencia) && (num4 > referencia) && (num5 > referencia);

    // Mostrar resultados basados en el valor booleano
    cout << (todosMayores ? "Todos los numeros son mayores que el numero de referencia." :
                           "No todos los numeros son mayores que el numero de referencia.") << endl;

    return 0;
}
