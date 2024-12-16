// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float radio, area, circunferencia;
    const float PI = 3.1416;

    // Solicitar el radio al usuario
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    // Cálculos
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    // Mostrar resultados
    cout << "Resultados:\n";
    cout << "Area del circulo: " << area << endl;
    cout << "Circunferencia del circulo: " << circunferencia << endl;

    return 0;
}

