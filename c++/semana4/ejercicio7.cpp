#include <iostream>
#include <vector>
using namespace std;
vector<int> vectorDuplicado(vector<int> numeros)
{
    vector<int> numerosDuplicados;
    for (int numero : numeros)
    {
        bool esDuplicado = false;
        for (int numerosDuplicado : numerosDuplicados)
        {
            if (numerosDuplicado == numero)
            {
                esDuplicado = true;
                break;
            }
        }
        if (!esDuplicado)
        {
            numerosDuplicados.push_back(numero);
        }
    }
    return numerosDuplicados;
}
int main()
{
    vector<int> duplicadoNumeros = {1, 2, 2, 3, 3, 4, 5, 6, 6, 7, 7, 8};
    vector<int> vector = vectorDuplicado(duplicadoNumeros);

    cout << "Vector original: ";
    for (int numero : duplicadoNumeros)
    {
        cout << numero << " ";
    }
    cout << "\nVector sin duplicado: ";
    for (int numero : vector)
    {
        cout << numero << " ";
    }

    return 0;
}
