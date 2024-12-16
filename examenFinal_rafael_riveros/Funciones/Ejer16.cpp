// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

// Función que recibe dos números enteros y devuelve su suma
int sumar(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int numero1, numero2, resultado;

    // Solicitar los dos números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // Llamar a la función sumar y guardar el resultado
    resultado = sumar(numero1, numero2);

    // Imprimir el resultado
    cout << "La suma de " << numero1 << " y " << numero2 << " es: " << resultado << endl;

    return 0;
}
