/*
Crea una clase llamada "Registro_de_empleados" qu e tenga una estructura interna llamada "Empleado".
Cada "Empleado" debe tener un nombre (string) y un vector de enteros que representen las horas trabajadas
cada día de la semana.
La clase "Registro_de_empleados" debe tener un método llamado "registro_de_empleados()" que haga lo siguiente:
1. Pide al usuario el número de empleados.
2. Para cada empleado, pide al usuario el nombre del empleado.
3. Luego, pide al usuario que ingrese las horas trabajadas para cada día de la semana (7 días en total)
para ese empleado.
Finalmente, en la función main, crea una instancia de "Registro_de_empleados" y llama al método
"registro_de_empleados()".
*/
#include <iostream>
#include<vector>
using namespace std;
class Registro_de_empleados
{
    struct Empleado
    {
        string nombre;
        vector<int>horas;
    };
    vector<Empleado>empleados;
    public:
    Registro_de_empleados(){}
    virtual void Registro()
    {
        int x;
        int z;
        cout<<"Ingrese el numero de empleados que desea registrar: ";
        cin>>x;
        cout<<"Ingrese el numero de Dias trabajados: ";
        cin>>z;
        for(int i=0;i<x;i++)
        {
            Empleado agregar;
            cout<<"Ingrese el nombre del empleado "<< i+1 <<": ";
            cin>>agregar.nombre;
            for(int j=0;j<z;j++)
            {
                int h;
                cout<<"Ingrese la hora trabajada "<<j+1<<" por "<< agregar.nombre <<": ";
                cin>>h;
                agregar.horas.push_back(h);
            }
            empleados.push_back(agregar);
        }
    }
    void mostrar()
    {
        for(const auto& empleado : empleados)
        {
            cout << "Nombre del empleado: " << empleado.nombre << endl;
            cout << "Horas trabajadas por dia: ";
            for(const auto& horas : empleado.horas)
            {
                cout << horas << " ";
            }
            cout << endl;
        }
    }
};
main()
{
    Registro_de_empleados *a=new Registro_de_empleados;
    a->Registro();
    a->mostrar();   
    delete a;
    return 0;
}