#include <iostream>
using namespace std;
int main()
{
    const int filas = 2;
    const int columnas = 2;
    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    cout << "\nIngrese los valores para la primera matriz:\n";
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << "Matriz 1[" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }
    cout << "\nIngrese los valores para la segunda matriz:\n";
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << "Matriz 2[" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }
    int Producto[filas][columnas];
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            Producto[i][j] = 0;
            for (int k = 0; k < columnas; ++k)
            {
                Producto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    cout << "\nMatriz Producto:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << Producto[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}