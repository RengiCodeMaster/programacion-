/**/
#include <iostream>
#include <vector>
using namespace std;
struct alumnos
{
    string nombre;
    int edad;
    float calificacion;
};
int main()
{
    vector<alumnos> cantidad_de_estudiantes;
    int n;
    cout << "\nIngrese la cantidad de estudiantes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        alumnos estudiantes;
        cout << "\nIngrese el nombre del estudiante " << i + 1 << ": ";
        cin >> estudiantes.nombre;
        cout << "\nIngrese la edad del estudiante " << estudiantes.nombre << ": ";
        cin >> estudiantes.edad;
        cout << "\nIngrese la calificacion del estudiante " << estudiantes.nombre << ": ";
        cin >> estudiantes.calificacion;
        cantidad_de_estudiantes.push_back(estudiantes);
    }
    cout << "\nInformacion de los  Estudiantes:\n";
    for (const alumnos& estudiantes : cantidad_de_estudiantes)
    {
        cout << "\nNombre: " << estudiantes.nombre;
        cout << "\nEdad: " << estudiantes.edad;
        cout << "\nCalificacion: " << estudiantes.calificacion << "\n";
    }

    return 0;
}