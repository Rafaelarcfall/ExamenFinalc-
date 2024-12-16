// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int numeroUno, numeroDos;
    int suma, resta, multiplicacion;
    float division;

    // Solicitar al usuario los números
    cout << "Ingrese el primer número entero: ";
    cin >> numeroUno;
    cout << "Ingrese el segundo número entero: ";
    cin >> numeroDos;

    // Operaciones
    suma = numeroUno + numeroDos;
    resta = numeroUno - numeroDos;
    multiplicacion = numeroUno * numeroDos;

    // Validar división por cero
    if (numeroDos != 0) {
        division = static_cast<float>(numeroUno) / numeroDos;
    } else {
        cout << "Error: División por cero no permitida.\n";
        division = 0; // Asignar un valor por defecto
    }

    // Mostrar resultados
    cout << "Resultados:\n";
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicación: " << multiplicacion << endl;
    if (numeroDos != 0) {
        cout << "División: " << division << endl;
    }

    return 0;
}

