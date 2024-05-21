//Ejerccio 5

#include <iostream>
using namespace std;

int main() {
    int numero;
    int sumaPares = 0;
    int cantidadPares = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numero;

        if (numero % 2 == 0) {
            sumaPares += numero;
            cantidadPares++;
        }
    }

    if (cantidadPares > 0) {
        double mediaPares = static_cast<double>(sumaPares) / cantidadPares;

        cout << "La suma de los numeros pares es: " << sumaPares << endl;
        cout << "La cantidad de numeros pares es: " << cantidadPares << endl;
        cout << "La media aritmética de los numeros pares es: " << mediaPares << endl;
    } else {
        cout << "No se ingresaron numeros pares." << endl;
    }

    return 0;
}

