// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    int opcion;
    float numero;

    do {
        // Mostrar el menú
        cout << "Seleccione una opcion:\n";
        cout << "1. Calcular el cuadrado de un numero.\n";
        cout << "2. Calcular el cubo de un numero.\n";
        cout << "3. Salir.\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Solicitar numero y calcular cuadrado
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "El cuadrado de " << numero << " es: " << numero * numero << endl;
                break;
            case 2:
                // Solicitar numero y calcular cubo
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "El cubo de " << numero << " es: " << numero * numero * numero << endl;
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor seleccione una opcion valida." << endl;
        }
    } while (opcion != 3); // Continuar hasta que el usuario elija salir

    return 0;
}
