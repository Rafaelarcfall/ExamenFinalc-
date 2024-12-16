#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra_encriptada;

    // Solicitar la palabra encriptada al usuario
    cout << "Ingresa la palabra encriptada: ";
    cin >> palabra_encriptada;

    // Desencriptar con claves del 1 al 5
    cout << "Las posibles palabras desencriptadas son:" << endl;
    for (int clave = 1; clave <= 5; ++clave) {
        string palabra_desencriptada = "";

        // Desencriptar cada carácter
        for (char c : palabra_encriptada) {
            char letra_desencriptada = c - clave; // Restamos la clave al valor ASCII
            palabra_desencriptada += letra_desencriptada;
        }

        // Imprimir la palabra desencriptada con la clave correspondiente
        cout << "Clave " << clave << ": " << palabra_desencriptada << endl;
    }

    return 0;
}
