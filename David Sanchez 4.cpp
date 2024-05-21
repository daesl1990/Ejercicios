//Ejercicio 4


#include <iostream>
using namespace std;

int main(){
	int suma = 0;
	for (int i = 1; i <= 100; i++){
	 suma += i * i;
	}
	cout << "La suma de los cuadrados de los 100 primeros numeros naturales es: " << suma << endl;
	return 0;
}
