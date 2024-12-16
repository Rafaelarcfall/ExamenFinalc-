// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaracion de un vector de tamaño 5
    int numeros[5];

    // Solicitar los cinco numeros al usuario
    cout << "Ingrese 5 numeros:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Imprimir los numeros en orden inverso
    cout << "Los numeros en orden inverso son:\n";
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << endl;
    }

    return 0;
}
