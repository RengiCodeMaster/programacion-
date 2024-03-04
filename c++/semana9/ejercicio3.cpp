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
    Registro_de_notas(){}
    virtual void  registro_de_alumnos()
    {
        int x;
        cout<<"ingrese la cantidad de alumnos: ";
        cin>>x;
        int z;
        cout<<"ingrese la cantidad de notas: ";
        cin>>z;
        for(int i=0;i<x;i++)
        {
            Alumno alumno;
            cout<<"ingrese el nombre del alumno"<< i+1<<":";
            cin>>alumno.nombre;
            for(int j=0;j<z;j++)
            {
                double a;
                cout<<"ingrese la nota "<<j+1<<" del alumno "<<alumno.nombre<<": ";
                cin>>a;
                alumno.notas.push_back(a);
            }
        }
    }
};
int main()
{
    Registro_de_notas  *a;
    a->registro_de_alumnos();
    return 0;
}