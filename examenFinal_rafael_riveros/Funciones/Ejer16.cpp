// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

// Funci�n que recibe dos n�meros enteros y devuelve su suma
int sumar(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int numero1, numero2, resultado;

    // Solicitar los dos n�meros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // Llamar a la funci�n sumar y guardar el resultado
    resultado = sumar(numero1, numero2);

    // Imprimir el resultado
    cout << "La suma de " << numero1 << " y " << numero2 << " es: " << resultado << endl;

    return 0;
}
