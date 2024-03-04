/*-	Vector:
Dado un vector de números enteros, pide al usuario que ingrese valores y luego ordena el vector de manera ascendente. Finalmente, muestra el vector ordenado.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> numeros;
    int Nvalores;
    cout << "\n ingrese la cantidad de valores: ";
    cin >> Nvalores;
    for (int i = 0; i < Nvalores; ++i)
    {
        int valor;
        cout << "\nIngrese el valor: ";
        cin >> valor;
        numeros.push_back(valor);
        sort(numeros.begin(), numeros.end());
    }
    cout << "Vector ordenado: ";
    for (int i = 0; i < numeros.size(); ++i)
    {
        cout << numeros[i] << " ";
    }

    return 0;
}