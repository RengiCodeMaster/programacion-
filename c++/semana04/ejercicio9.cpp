#include <iostream>
#include <vector>

using namespace std;

bool es_primo(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

vector<int> numeros_primos(int inicio, int fin)
{
    vector<int> primos;
    for (int i = inicio; i <= fin; i++)
    {
        if (es_primo(i))
            primos.push_back(i);
    }
    return primos;
}

int main()
{
    int inicio, fin;
    cout << "Ingrese el rango de numeros (inicio): ";
    cin >> inicio ;
    cout << "Ingrese el rango de numeros (fin): ";
    cin>>fin;

    vector<int> primos = numeros_primos(inicio, fin);

    cout << "Los numeros primos en el rango son: ";
    for (int primo : primos)
    {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}