#include <iostream>
#include <vector>
using namespace std;

class Asistencia_de_profesores
{
private:
    string nombre;
    vector<int> horas_trabajadas;

public:
    Asistencia_de_profesores(string _nombre, vector<int> _horas) : nombre(_nombre), horas_trabajadas(_horas) {}

    // Getter para obtener el nombre del profesor
    string getNombre() const {
        return nombre;
    }

    // Getter para obtener las horas trabajadas
    vector<int> getHorasTrabajadas() const {
        return horas_trabajadas;
    }
};

class RegistroAsistencia
{
private:
    vector<Asistencia_de_profesores> profesores;

public:
    void registro()
    {
        int x;
        cout << "Ingrese la cantidad de profesores que desea registrar: ";
        cin >> x;

        for (int i = 0; i < x; i++)
        {
            string nombre_profesor;
            cout << "Ingrese el nombre del profesor " << i + 1 << ": ";
            cin >> nombre_profesor;

            vector<int> horas;
            for (int j = 0; j < 7; j++)
            {
                int horas_dia;
                cout << "Ingrese las horas trabajadas el día " << j + 1 << " por " << nombre_profesor << ": ";
                cin >> horas_dia;
                horas.push_back(horas_dia);
            }

            // Crear una instancia de Asistencia_de_profesores y agregarla al vector de profesores
            profesores.push_back(Asistencia_de_profesores(nombre_profesor, horas));
        }
    }

    // Método para mostrar la información de los profesores
    void mostrarInformacion() const
    {
        for (const auto &profesor : profesores)
        {
            cout << "Nombre del profesor: " << profesor.getNombre() << endl;
            cout << "Horas trabajadas por dia: ";
            for (const auto &horas : profesor.getHorasTrabajadas())
            {
                cout << horas << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    RegistroAsistencia registro;
    registro.registro();
    registro.mostrarInformacion();
    return 0;
}
