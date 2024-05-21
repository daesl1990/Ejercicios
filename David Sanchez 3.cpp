//Ejercicio 3


#include <iostream>
using namespace std;

int main() {
    int numero;
    int mayor = 0;

    do {
        cout << "Ingresa un numero (o para empezar y -99 para terminar): ";
        cin >> numero;

        if (numero > mayor && numero != -99) {
            mayor = numero;
        }
    } while (numero != -99);

    cout << "El numero mayor de la serie es: " << mayor << endl;

    return 0;
}

