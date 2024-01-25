/*Ejercicio 3: Calificaciones*/
#include <iostream>
#include <vector>
using namespace std;
struct estudiante
{
    string nombre;
    vector<int> calificaciones;
};
int main()
{
    vector<estudiante> cantidad_de_alumnos;
    int n, x;
    cout << "\nIngrese la cantidad de estudiantes: ";
    cin >> n;
    cout << "\nIngrese la cantidad de notas que tendra cada uno: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        estudiante alumnos;
        cout << "\nIngrese el nombre del estudiante " << i + 1 << ": ";
        cin >> alumnos.nombre;

        for (int j = 0; j < x; j++)
        {
            int nota;
            cout << "\nIngrese la nota " << j + 1 << " para " << alumnos.nombre << ": ";
            cin >> nota;
            alumnos.calificaciones.push_back(nota);
        }
        cantidad_de_alumnos.push_back(alumnos);
    }

    cout << "\nPromedio de Calificaciones:\n";
    for (const estudiante &alumno : cantidad_de_alumnos)
    {
        float suma_calificaciones = 0;

        for (int nota : alumno.calificaciones)
        {
            suma_calificaciones += nota;
        }

        float promedio = suma_calificaciones / x;
        cout << "\nNombre: " << alumno.nombre;
        cout << "\nPromedio de Calificaciones: " << promedio << "\n";
    }

    return 0;
}
