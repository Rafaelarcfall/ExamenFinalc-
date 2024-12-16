// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaracion de la matriz 2x2
    int matriz[2][2];
    int suma = 0;

    // Solicitar los elementos de la matriz
    cout << "Ingrese los elementos de la matriz 2x2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
            suma += matriz[i][j]; // Acumular la suma de los elementos
        }
    }

    // Imprimir la suma de los elementos
    cout << "La suma de los elementos de la matriz es: " << suma << endl;

    return 0;
}
