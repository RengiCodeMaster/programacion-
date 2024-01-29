/*Problema: Suma de elementos de un array con punteros
Dado un array de números enteros y su tamaño, crea una función
que utilice punteros para calcular la suma de todos los elementos
del array. Luego, en el programa principal, declara un array, asigna valores a sus elementos
y llama a la función para obtener la suma. Imprime el resultado en la pantalla.*/
#include <iostream>
#include <vector>
using namespace std;
int suma(const vector<int> &vector)
{
    int resultado = 0;
    for (const int &valor : vector)
    {
        resultado += valor;
        
    }
    cout << "la suma es: " << resultado << endl;

    return resultado;
}
int main()
{
    int n;
    cout << "Ingrese la cantidad de numeros que desea sumar: ";
    cin >> n;
    vector<int> sumade_valores;
    for (int i = 0; i < n; i++)
    {
        int r;
        cout << "\nIngrese el numero " << i + 1 << ": ";
        cin >> r;
        sumade_valores.push_back(r);
    }
    suma(sumade_valores);

    return 0;
}