// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaracion de variables
    int operacion;
    float numeroUno, numeroDos, resultado;

    // Mostrar el menú de operaciones
    cout << "Selecciona una operacion:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "Ingresa el numero de la operacion que deseas realizar: ";
    cin >> operacion;

    // Solicitar los dos numeros
    cout << "Ingresa el primer numero: ";
    cin >> numeroUno;
    cout << "Ingresa el segundo numero: ";
    cin >> numeroDos;

    // Realizar la operacion seleccionada usando switch
    switch (operacion) {
        case 1:
            resultado = numeroUno + numeroDos;
            cout << "Resultado de la suma: " << resultado << endl;
            break;
        case 2:
            resultado = numeroUno - numeroDos;
            cout << "Resultado de la resta: " << resultado << endl;
            break;
        case 3:
            resultado = numeroUno * numeroDos;
            cout << "Resultado de la multiplicacion: " << resultado << endl;
            break;
        case 4:
            if (numeroDos != 0) {
                resultado = numeroUno / numeroDos;
                cout << "Resultado de la division: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;
        default:
            cout << "Operacion no valida. Por favor selecciona un numero entre 1 y 4." << endl;
    }

    return 0;
}
