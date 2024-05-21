//Ejercicio 2


#include <iostream>
using namespace std;

int main() {
    int sumaPares = 0;
    int sumaImpares = 0;

    for (int i = 1; i <= 200; i++) {
        if (i % 2 == 0) {
            sumaPares += i;
        } else {
            sumaImpares += i;
        }
    }

    cout << "La suma de los numeros pares entre 1 y 200 es: " << sumaPares << endl;
    cout << "La suma de los numeros impares entre 1 y 200 es: " << sumaImpares << endl;

    return 0;
}

