// Autor: Arnaldo Rafael Riveros Rojas
#include <iostream>
using namespace std;

// Función para intercambiar los valores de dos variables usando paso por referencia
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int numero1, numero2;

    // Solicitar los valores al usuario
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // Mostrar los valores antes de intercambiar
    cout << "Antes de intercambiar: numero1 = " << numero1 << ", numero2 = " << numero2 << endl;

    // Llamar a la funcion para intercambiar los valores
    intercambiar(numero1, numero2);

    // Mostrar los valores después de intercambiar
    cout << "Despues de intercambiar: numero1 = " << numero1 << ", numero2 = " << numero2 << endl;

    return 0;
}

