#include <iostream>
using namespace std;
class Pet
{
protected:
    string name;

public:
    Pet(string _name) : name(_name) {}
    virtual void mostrar()
    {
        cout << "Mi nombre es " << name << endl;
    }
};
class Dog : public Pet
{
private:
    string raza;

public:
    Dog(string n, string r) : Pet(n), raza(r) {}
    virtual void mostrar()
    {
        cout << "Mi raza es " << raza << endl;
    }
};
class Fiss : public Dog
{
private:
    string institucion;

public:
    Fiss(string n, string r, string i) : Dog(n, r), institucion(i) {}
    void mostrar()
    {
        Pet::mostrar();
        Dog::mostrar();
        cout << "Soy de la institucion " << institucion << endl;
    }
};

int main()
{
    Fiss f("Firulais", "Pastor Aleman", "UNI");
    f.mostrar();
    return 0;
}