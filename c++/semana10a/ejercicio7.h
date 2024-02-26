#include <iostream>
using namespace std;
class Mellody
{
private:
    string nombre;
    string proporciciones;
    int edad;

public:
    Mellody(string _nombre, string _proporciciones, int _edad) : nombre(_nombre), proporciciones(_proporciciones), edad(_edad) {}
    virtual void mostrar();
};
class Sebas : public Mellody
{
private:
    string sexo;

public:
    Sebas(string nombre, string proporciciones, int edad,string _sexo):Mellody(nombre,proporciciones,edad),sexo(_sexo){}
    virtual void mostrar();
};
void Mellody ::mostrar()
{
    cout << "Mi nombre es " << nombre << " , edad  es " << edad << " y soy " << proporciciones << endl;
}
void Sebas::mostrar()
{
    Mellody::mostrar();
    cout << "Y mi sexo es "<<sexo<<endl;
}