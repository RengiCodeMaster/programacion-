
#include <iostream>
#include <vector>
using namespace std;
struct laboratorios
{
    string nombre_de_laboratorio;
    string encargado_del_laboratorio;
};
struct materiales_delaboratorio
{
    string nombre_del_material;
    int canti1;
};
struct equipos
{
    string nombre;
    int canti2;
};
int main()
{
    vector<laboratorios> laboratorios_disponibles = {
        {"Laboratorio de carnes", "ING.MARCOS"},
        {"Laboratorio de fisica", "ING.SANTIESTEBAN"}};
    vector<materiales_delaboratorio> insumos;
    vector<equipos> cantidad_de_equipos;
    cout << "\n*****BIENVENIDO AL INVENTARIO DE LABORATORIOS DE LA UNAS*****\n"
        << endl;
    cout << "\n1.Agregar insumos a un laboratorio" << endl;
    cout << "\n2.Agregar equipos a un laboratorio" << endl;
    cout << "\n3.Agregar un laboratorio nuevo" << endl;
    int option;
    cout << "\nIngrese la opcion: ";
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "\n***SELECCIONE CON QUE LABORATORIO DESEA TRABAJAR***";
        cout << "\nLaboratorios Disponibles:\n";
        for (int i = 0; i < laboratorios_disponibles.size(); ++i)
        {
            cout << i + 1 << ". Nombre: " << laboratorios_disponibles[i].nombre_de_laboratorio << endl
                << "   Encargado: " << laboratorios_disponibles[i].encargado_del_laboratorio << "\n";
        }
        int option1;
        cout << "\nIngrese la opcion por favor: ";
        cin >> option1;
        switch (option1)
        {
        case 1:
            int x;
            cout << "\nIngrese la cantidad de insumos que desea agregar a la base de datos del laboratorio de carnes: ";
            cin >> x;
            for (int i = 0; i < x; i++)
            {
                materiales_delaboratorio añadir;
                cout << "\nIngrese el nombre del insumo " << i + 1 << ": ";
                cin >> añadir.nombre_del_material;
                cout << "\ncuanto de " << añadir.nombre_del_material << ": ";
                cin >> añadir.canti1;
                insumos.push_back(añadir);
            }
            break;
        case 2:
            int y;
            cout << "\nIngrese la cantidad de insumos que desea agregar a la base de datos del laboratorio de fisica: ";
            cin >> y;
            for (int i = 0; i < y; i++)
            {
                materiales_delaboratorio añadir;
                cout << "\nIngrese el nombre del insumo " << i + 1 << ": ";
                cin >> añadir.nombre_del_material;
                cout << "\ncuanto de " << añadir.nombre_del_material << ": ";
                cin >> añadir.canti1;
                insumos.push_back(añadir);
            }
            break;
        }
        break;
    case 2:
        cout << "\n***SELECCIONE CON QUE LABORATORIO DESEA TRABAJAR***";
        cout << "\nLaboratorios Disponibles:\n";
        for (int i = 0; i < laboratorios_disponibles.size(); ++i)
        {
            cout << i + 1 << ". Nombre: " << laboratorios_disponibles[i].nombre_de_laboratorio << endl
                << "   Encargado: " << laboratorios_disponibles[i].encargado_del_laboratorio << "\n";
        }
        int option2;
        cout << "\nIngrese la opcion por favor: ";
        cin >> option2;
        switch (option2)
        {
        case 1:
            int z;
            cout << "\nCuantos equipos nuevos desea agregar a la base de datos del laboratorio de carnes: ";
            cin >> z;
            for (int i = 0; i < z; i++)
            {
                equipos agregar;
                cout << "\nIngrese el nombre del equipo nuevo numero " << i + 1 << ": ";
                cin >> agregar.nombre;
                cout << "\nIngrese la cantidad de " << agregar.nombre << ": ";
                cin >> agregar.canti2;
            }
            break;
        case 2:
            int w;
            cout << "\nCuantos equipos nuevos desea agregar a la base de datos del laboratorio de fisica: ";
            cin >> w;
            for (int i = 0; i < w; i++)
            {
                equipos agregar;
                cout << "\nIngrese el nombre del equipo nuevo numero " << i + 1 << ": ";
                cin >> agregar.nombre;
                cout << "\nIngrese la cantidad de " << agregar.nombre << ": ";
                cin >> agregar.canti2;
            }
            break;
        }
        break;
    case 3:
        int z;
        cout << "\nHola bienvenido dime cuantos laboratorios nuevos desea agregar a la base de datos: ";
        cin >> z;
        for (int i = 0; i < z; i++)
        {
            laboratorios nuevos;
            cout << "\nIngrese el nombre del laboratorio numero " << i + 1 << ": ";
            cin >> nuevos.nombre_de_laboratorio;
            cout << "\nDime quién es el encargado del laboratorio " << nuevos.nombre_de_laboratorio << ": ";
            cin >> nuevos.encargado_del_laboratorio;
            laboratorios_disponibles.push_back(nuevos);
        break;
    }    
}
return 0;
}