#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    int clave;

    // Solicitar la palabra al usuario
    cout << "Ingresa una palabra: ";
    cin >> palabra;

    // Solicitar la clave (un n�mero entre 1 y 5)
    cout << "Ingresa un n�mero de clave (entre 1 y 5): ";
    cin >> clave;

    // Validar la clave
    if (clave < 1 || clave > 5) {
        cout << "Clave inv�lida. Debe ser un n�mero entre 1 y 5." << endl;
        return 1; // Finalizar el programa si la clave es inv�lida
    }

    // Encriptar la palabra
    string palabra_encriptada = "";
    for (char c : palabra) {
        // Desplazar cada caracter seg�n la clave
        char letra_encriptada = c + clave;
        palabra_encriptada += letra_encriptada;
    }

    // Imprimir la palabra encriptada
    cout << "La palabra encriptada es: " << palabra_encriptada << endl;

    return 0;
}
