#include <iostream>
using namespace std;
int main()
{
    int filas = 2;
    int columnas = 2;
    int matriz1[filas][columnas];
    int mar;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "ingrese el valor de [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }
    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}