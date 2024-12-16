// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaracion de variables
    int referencia;
    int numeros[5];
    bool todosMayores = true;

    // Solicitar el numero de referencia
    cout << "Ingrese el numero de referencia: ";
    cin >> referencia;

    // Solicitar los cinco numeros al usuario
    cout << "Ingrese cinco numeros:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        // Verificar si el numero actual es menor o igual al de referencia
        if (numeros[i] <= referencia) {
            todosMayores = false;
        }
    }

    // Mostrar el resultado
    if (todosMayores) {
        cout << "Todos los numeros son mayores que " << referencia << "." << endl;
    } else {
        cout << "No todos los numeros son mayores que " << referencia << "." << endl;
    }

    return 0;
}

