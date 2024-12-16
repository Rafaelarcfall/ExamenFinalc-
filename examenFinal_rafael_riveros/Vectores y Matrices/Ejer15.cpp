// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaracion de las matrices 2x2 y el resultado de la multiplicacion
    int matrizA[2][2], matrizB[2][2], resultado[2][2];

    // Solicitar los elementos de la primera matriz
    cout << "Ingrese los elementos de la primera matriz 2x2 (Matriz A):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrizA[i][j];
        }
    }

    // Solicitar los elementos de la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz 2x2 (Matriz B):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrizB[i][j];
        }
    }

    // Realizar la multiplicacion de las matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = 0;  // Inicializar el elemento de la matriz resultado
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Imprimir la matriz resultado
    cout << "El resultado de la multiplicacion es:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

