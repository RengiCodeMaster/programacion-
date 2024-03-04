#include <iostream>
using namespace std;

class Silla
{
private:
    string diseño;
    string nombre;
    double peso;
    double soporte_de_peso;

public:
    Silla(string _diseño, string _nombre, double _peso, double _soporte_de_peso) : diseño(_diseño), nombre(_nombre), peso(_peso), soporte_de_peso(_soporte_de_peso) {}

    // Destructor
    ~Silla()
    {
        cout << "Destructor llamado para la silla " << nombre << " de modelo " << diseño << endl;
    }

    void sentarse()
    {
        cout << "Me sentaré en la silla " << nombre << " de modelo " << diseño << " con un peso de " << peso << " y soporta un peso de " << soporte_de_peso << endl;
    }
};

int main()
{
    Silla s1("maderin", "curvo", 5.0, 100.0);
    s1.sentarse();

    return 0;
}
