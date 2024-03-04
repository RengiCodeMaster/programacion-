#include <iostream>
#include <vector>
using namespace std;

int obtenerCantidadNumeros()
{
    int n;
    cout << "\nIngrese la cantidad de numeros: ";
    cin >> n;
    return n;
}

void llenarVector(vector<int> &vector, int n)
{
    for (int i = 0; i < n; ++i)
    {
        int valor;
        cout << "\nIngrese el valor " << i + 1 << ": ";
        cin >> valor;
        vector.push_back(valor);
    }
}

int sumarElementos(const vector<int> &vector)
{
    int suma = 0;
    for (int elemento : vector)
    {
        suma += elemento;
    }
    return suma;
}
int main()
{

    int cantidad = obtenerCantidadNumeros();
    vector<int> datos;
    llenarVector(datos, cantidad);
    int suma = sumarElementos(datos);
    cout << "\nLa suma de los elementos del vector es: " << suma << endl;

    return 0;
}
