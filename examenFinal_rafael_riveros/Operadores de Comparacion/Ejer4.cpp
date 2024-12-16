// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaracion de variables
    int numeroUno, numeroDos;

    // Solicitar los numeros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> numeroUno;
    cout << "Ingrese el segundo numero: ";
    cin >> numeroDos;

    // Comparacion de los numeros
    if (numeroUno > numeroDos) {
        cout << "El primer numero es mayor." << endl;
    } else if (numeroDos > numeroUno) {
        cout << "El segundo numero es mayor." << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }

    return 0;
}
