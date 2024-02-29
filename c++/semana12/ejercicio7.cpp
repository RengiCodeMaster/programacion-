#include <iostream>
using namespace std;
class Padre
{
protected:
    string nombre;
    string apellidoP;
    int edad;

public:
    Padre(string n, string a, int e) : nombre(n), apellidoP(a), edad(e) {}
    virtual void mostrar() = 0;
};
class Madre : public Padre
{
private:
    string apellidoM;
    string hobby;

public:
    Madre(string n, string a, int i, string am, string h) : Padre(n, a, i), apellidoM(am), hobby(h) {}
    void mostrar() override
    {
        cout << "nombre: " << nombre << endl;
        cout << "apellido paterno: " << apellidoP << endl;
        cout << "apellido materno: " << apellidoM << endl;
        cout << "mi hobby es: " << hobby << endl;
        cout << "edad: " << edad << endl;
    }
};
class Hijo : public Madre
{
private:
    string carrera;

public:
    Hijo(string n, string a, int i, string am, string h, string c) : Madre(n, a, i, am, h), carrera(c) {}
    void mostrar()override
    {
        Madre::mostrar();
        cout<<"mi carrera es: "<<carrera<<endl;
    }
};
int main()
{
    Hijo h1("juan","rengifo",20,"fretel","jugar futbol","ingenieria en informatica y sistemas");
    h1.mostrar();
    return 0;
}