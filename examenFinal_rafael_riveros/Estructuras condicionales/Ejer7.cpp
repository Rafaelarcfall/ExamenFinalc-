// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaracion de variables
    int numero;

    // Solicitar el numero al usuario
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Determinar si es positivo, negativo o cero
    if (numero > 0) {
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }

    return 0;
}

