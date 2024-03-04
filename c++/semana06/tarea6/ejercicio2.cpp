/*Crea un vector de strings y permite al usuario ingresar varias palabras. 
Luego, concatena todas las palabras en una única cadena y muestra el resultado.*/
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    vector<string> cadenas;
    int cantidad;
    cout << "\nIngrese la cantidad de palbras: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        string palabras;
        cout << "\nIngrese la palabra: ";
        cin >> palabras;
        cadenas.push_back(palabras);
    }
    string concatenada = accumulate(cadenas.begin(), cadenas.end(), string(""));
    cout<<"\nLa cadena resultante es: "<<concatenada<<endl;

    return 0;
}