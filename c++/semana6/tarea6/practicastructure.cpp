#include <iostream>
#include<vector>
using namespace std;
struct Estudiantes
{
    string nombre;
    int calificaciones[];
};
int main()
{
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    vector<Estudiantes> Estudiante(n);
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre del estudiante: ";
        cin >> Estudiante[i].nombre;
        cout << "Ingrese la nota del estudiante: ";
        cin >> Estudiante[i].calificaciones[i];
        suma += Estudiante[i].calificaciones[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Nota " << Estudiante[i].calificaciones[i];
    }

    int promedio;
    for (int i = 0; i < n; i++)
    {
        promedio = suma / n;
    }
    cout << promedio;

    return 0;
}