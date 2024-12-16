// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

int main() {
    // Declaracion de variables
    int dia;

    // Solicitar el numero del 1 al 7
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;

    // Usar switch para determinar el dia
    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Numero invalido. Ingrese un numero del 1 al 7." << endl;
    }

    return 0;
}
