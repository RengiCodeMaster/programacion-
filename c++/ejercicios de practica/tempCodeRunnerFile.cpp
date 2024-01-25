#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<double> numeros;
    double valor = 0;
    for (int i = 0; i < numeros.size(); ++i)
    {
        cout << "Ingrese los valores: ";
        cin >> valor;
        if (valor == 0)
            break;
        numeros.push_back(valor);
    }
    sort(numeros.begin(), numeros.end());

    for (int i = 0; i < numeros.size(); ++i)
    {

        cout << numeros[i] << " ";
    }

    return 0;
}