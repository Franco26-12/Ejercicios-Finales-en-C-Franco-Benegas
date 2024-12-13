// Franco Benegas
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Solicitar tres números
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cout << "Ingresa el tercer numero: ";
    cin >> num3;

    // Usar booleanos para verificar el orden
    bool ordenAscendente = num1 < num2 && num2 < num3;
    bool ordenDescendente = num1 > num2 && num2 > num3;
    bool desordenado = !(ordenAscendente || ordenDescendente);

    // Mostrar resultados basados en los valores booleanos
    cout << (ordenAscendente ? "Los numeros estan en orden ascendente." :
                (ordenDescendente ? "Los numeros estan en orden descendente." :
                 "Los numeros estan desordenados.")) << endl;

    return 0;
}
