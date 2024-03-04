/*Crea un vector de estructuras "Estadisticas" y muestra información resumida sobre las calificaciones.*/
#include <iostream>
#include <vector>
using namespace std;
struct estadisticas
{
    double calificaciones;
};
int main()
{
    int cantidad;
    vector<estadisticas> notas(cantidad);

    cout << "\nIngrese la cantidad de notas: ";
    cin >> cantidad;
    for (int i = 0; i > cantidad; i++)
    {
        int cali;
        cout << "\nIngrese la nota: ";
        cin >> cali;
        notas[i].calificaciones=cali;
    }

    return 0;
}