#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int filas = 2, columnas = 2;
    string texto[filas][columnas];

    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << "Ingrese sus palabras para la posicion [" << i << "][" << j << "]: ";
            cin >> texto[i][j];
        }
    }

    cout << "\nMatriz de Strings:\n";
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << texto[i][j] << " ";
        }
        cout << endl;
    }

    string resultado;
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            resultado += texto[i][j] + " ";
        }
    }

    cout << "\nResultado Concatenado:\n"<< resultado << endl;
        

    return 0;
}
