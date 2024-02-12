#include<iostream>
#include<vector>
using namespace std;
struct Frutas
{
    string nombre;
    int  precio;
};
int main()
{
    vector<Frutas> registro;
    int x;
    cout << "\nIngrese la cantidad de frutas: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        Frutas agregar;
        cout << "\nIngrese el nombre de la fruta " << i + 1 << ": ";
        cin >> agregar.nombre;
        cout << "\nIngrese el precio de la fruta " << agregar.nombre << ": ";
        cin >> agregar.precio;
        registro.push_back(agregar);
    }
    cout << "\nInformacion de las frutas:\n";
    for (const Frutas& agregar :registro)
    {
        cout << "\nNombre: " << agregar.nombre;
        cout << "\nPrecio: " << agregar.precio << "\n";
    }
    return 0;
}