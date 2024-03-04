#include <iostream>
using namespace std;

int main()
{
    int filas, columnas;
    cout << "Ingrese el numero de filas  de la matriz: ";
    cin>>filas;
    cout << "Ingrese el numero de columnas  de la matriz: ";
    cin >>columnas;

    int matriz[filas][columnas];
    int transpuesta[columnas][filas];

    cout << "Introduce los elementos de la matriz:\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j <columnas;j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            transpuesta[i][j] = matriz[j][i];
        }
    }

    cout << "\nLa transpuesta de la matriz es:\n";
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}