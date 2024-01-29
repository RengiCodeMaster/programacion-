#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int tamanoArreglo;

    // Solicitar al usuario el tamaño del arreglo
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tamanoArreglo;

    // Crear un arreglo dinámico usando new
    int *arreglo = new int[tamanoArreglo];

    // Llenar el arreglo con algunos valores
    for (int i = 0; i < tamanoArreglo; ++i) {
        arreglo[i] = i * 2;
    }

    // Imprimir los valores del arreglo usando punteros
    cout << "Valores del arreglo: ";
    for (int i = 0; i < tamanoArreglo; ++i) {
        cout << *(arreglo + i) << " ";
    }

    // Liberar la memoria asignada utilizando delete
    delete[] arreglo;

    return 0;
}

