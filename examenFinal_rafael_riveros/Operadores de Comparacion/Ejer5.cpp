// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaracion de variables
    int numeroUno, numeroDos, numeroTres;

    // Solicitar los numeros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> numeroUno;
    cout << "Ingrese el segundo numero: ";
    cin >> numeroDos;
    cout << "Ingrese el tercer numero: ";
    cin >> numeroTres;

    // Determinar el orden
    if (numeroUno < numeroDos && numeroDos < numeroTres) {
        cout << "Los numeros estan en orden ascendente." << endl;
    } else if (numeroUno > numeroDos && numeroDos > numeroTres) {
        cout << "Los numeros estan en orden descendente." << endl;
    } else {
        cout << "Los numeros estan desordenados." << endl;
    }

    return 0;
}
