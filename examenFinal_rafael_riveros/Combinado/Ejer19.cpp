#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    int clave;

    // Solicitar la palabra al usuario
    cout << "Ingresa una palabra: ";
    cin >> palabra;

    // Solicitar la clave (un número entre 1 y 5)
    cout << "Ingresa un número de clave (entre 1 y 5): ";
    cin >> clave;

    // Validar la clave
    if (clave < 1 || clave > 5) {
        cout << "Clave inválida. Debe ser un número entre 1 y 5." << endl;
        return 1; // Finalizar el programa si la clave es inválida
    }

    // Encriptar la palabra
    string palabra_encriptada = "";
    for (char c : palabra) {
        // Desplazar cada caracter según la clave
        char letra_encriptada = c + clave;
        palabra_encriptada += letra_encriptada;
    }

    // Imprimir la palabra encriptada
    cout << "La palabra encriptada es: " << palabra_encriptada << endl;

    return 0;
}
