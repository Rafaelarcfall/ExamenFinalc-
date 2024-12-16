// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaraci�n de variables
    int numeroUno, numeroDos;
    int suma, resta, multiplicacion;
    float division;

    // Solicitar al usuario los n�meros
    cout << "Ingrese el primer n�mero entero: ";
    cin >> numeroUno;
    cout << "Ingrese el segundo n�mero entero: ";
    cin >> numeroDos;

    // Operaciones
    suma = numeroUno + numeroDos;
    resta = numeroUno - numeroDos;
    multiplicacion = numeroUno * numeroDos;

    // Validar divisi�n por cero
    if (numeroDos != 0) {
        division = static_cast<float>(numeroUno) / numeroDos;
    } else {
        cout << "Error: Divisi�n por cero no permitida.\n";
        division = 0; // Asignar un valor por defecto
    }

    // Mostrar resultados
    cout << "Resultados:\n";
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicaci�n: " << multiplicacion << endl;
    if (numeroDos != 0) {
        cout << "Divisi�n: " << division << endl;
    }

    return 0;
}

