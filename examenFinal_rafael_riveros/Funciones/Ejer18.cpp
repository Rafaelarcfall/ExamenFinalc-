// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

// Función que calcula el mayor de tres números
void calcularMayor(int num1, int num2, int num3, int &mayor) {
    // Se asume que el primer número es el mayor inicialmente
    mayor = num1;

    // Comparar con el segundo número
    if (num2 > mayor) {
        mayor = num2;
    }

    // Comparar con el tercer número
    if (num3 > mayor) {
        mayor = num3;
    }
}

int main() {
    int numero1, numero2, numero3, mayor;

    // Solicitar los tres números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    // Llamar a la función para calcular el mayor
    calcularMayor(numero1, numero2, numero3, mayor);

    // Imprimir el resultado
    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
