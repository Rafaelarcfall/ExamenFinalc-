// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaracion de variables
    int numero;
    int suma = 0;

    // Solicitar numeros hasta que el usuario ingrese un numero negativo
    cout << "Ingrese numeros para sumar. Ingrese un numero negativo para terminar.\n";

    do {
        cout << "Ingrese un numero: ";
        cin >> numero;

        // Sumar el numero ingresado si es no negativo
        if (numero >= 0) {
            suma += numero;
        }

    } while (numero >= 0); // Continuar mientras el numero sea positivo o cero

    // Imprimir la suma total
    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}
