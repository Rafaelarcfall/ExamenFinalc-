// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaraci�n de variables
    float numeroUno, numeroDos, numeroTres;
    float promedio;
    float numeroMayor, numeroMenor, diferencia;

    // Solicitar los n�meros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> numeroUno;
    cout << "Ingrese el segundo numero: ";
    cin >> numeroDos;
    cout << "Ingrese el tercer numero: ";
    cin >> numeroTres;

    // Calcular el promedio
    promedio = (numeroUno + numeroDos + numeroTres) / 3;

    // Determinar el n�mero mayor
    numeroMayor = max(numeroUno, max(numeroDos, numeroTres));

    // Determinar el n�mero menor
    numeroMenor = min(numeroUno, min(numeroDos, numeroTres));

    // Calcular la diferencia
    diferencia = numeroMayor - numeroMenor;

    // Mostrar resultados
    cout << "Resultados:\n";
    cout << "Promedio: " << promedio << endl;
    cout << "Numero mayor: " << numeroMayor << endl;
    cout << "Numero menor: " << numeroMenor << endl;
    cout << "Diferencia entre el mayor y el menor: " << diferencia << endl;

    return 0;
}
