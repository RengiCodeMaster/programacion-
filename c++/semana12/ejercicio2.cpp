#include <iostream>
#include <vector>
using namespace std;
class Registro_de_notas
{
private:
    struct Alumno
    {
        string nombre;
        vector<double> notas;
    };

public:
    vector<Alumno> alumnos;
    Registro_de_notas() {}
    void registro_de_alumnos()
    {
        int x;
        cout << "ingrese la cantidad de alumnos: ";
        cin >> x; 
        int z;
        cout << "ingrese la cantidad de notas: ";
        cin >> z;
        for (int i = 0; i < x; i++)
        {
            Alumno alumno;
            cout << "ingrese el nombre del alumno " << i + 1 << ": ";
            cin >> alumno.nombre;
            for (int j = 0; j < z; j++)
            {
                double a;
                cout << "ingrese la nota " << j + 1 << " del alumno " << alumno.nombre << ": ";
                cin >> a;
                alumno.notas.push_back(a);
            }
            alumnos.push_back(alumno);
        }
    }
    void mostrarinformacion()
    {
        cout << "Promedio de calificaciones: " << endl;
        for (const Alumno &alumno : alumnos)
        {
            double suma = 0;
            for (double nota : alumno.notas)
            {
                suma += nota;
            }
            double promedio = suma / alumno.notas.size();
            cout << "Nombre: " << alumno.nombre << endl;
            cout << "Promedio de calificaciones: " << promedio << endl;
        }
    }
};
int main()
{
    Registro_de_notas r;
    r.registro_de_alumnos();
    r.mostrarinformacion();
    return 0;
}
