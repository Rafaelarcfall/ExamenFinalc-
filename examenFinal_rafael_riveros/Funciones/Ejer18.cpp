// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

// Funci�n que calcula el mayor de tres n�meros
void calcularMayor(int num1, int num2, int num3, int &mayor) {
    // Se asume que el primer n�mero es el mayor inicialmente
    mayor = num1;

    // Comparar con el segundo n�mero
    if (num2 > mayor) {
        mayor = num2;
    }

    // Comparar con el tercer n�mero
    if (num3 > mayor) {
        mayor = num3;
    }
}

int main() {
    int numero1, numero2, numero3, mayor;

    // Solicitar los tres n�meros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    // Llamar a la funci�n para calcular el mayor
    calcularMayor(numero1, numero2, numero3, mayor);

    // Imprimir el resultado
    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
