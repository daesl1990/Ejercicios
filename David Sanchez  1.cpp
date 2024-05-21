//Ejerccio 1


#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    long long producto = 1; 

    for (int i = 20; i <= 400; i++) {
        suma += i;
        producto *= i;
    }

    cout << "La suma de los numeros entre 20 y 400 es: " << suma << endl;
    cout << "El producto de los numeros entre 20 y 400 es: " << producto << endl;

    return 0;
}

