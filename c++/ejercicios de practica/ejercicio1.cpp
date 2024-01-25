#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<double> numeros;
    double valor = 0;
    int cantidad;

    cout << "Ingrese la cantidad de valores: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; ++i)
    {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> valor;
        numeros.push_back(valor);
    }

    sort(numeros.begin(), numeros.end());

    cout << "Valores ordenados: ";
    for (int i = 0; i < numeros.size(); ++i)
    {
        cout << numeros[i] << " ";
    }

    return 0;
}
