#include <iostream>
using namespace std;
class Animal
{
protected:
    string nombre;
    int numero_de_patas;
    string tipo_de_alimentacion;
    int edad;

public:
    Animal(string _nombre, int _numero_de_patas, string _tipo_de_alimentacion, int _edad) : nombre(_nombre), numero_de_patas(_numero_de_patas), tipo_de_alimentacion(_tipo_de_alimentacion), edad(_edad) {}
    virtual void mostrar()
    {
        cout << "NOMBRE: " << nombre << endl;
        cout << "NUMERO DE PATAS: " << numero_de_patas << endl;
        cout << "TIPO DE ALIMENTACION: " << tipo_de_alimentacion << endl;
        cout << "EDAD: " << edad << endl;
    }
    virtual void cazar() = 0;
};
class Mamifero : public Animal
{
private:
    string tipo_de_reproduccion;

public:
    Mamifero(string _nombre, int _numero_de_patas, string _tipo_de_alimentacion, int _edad, string _tipo_de_reproduccion) : Animal(_nombre, _numero_de_patas, _tipo_de_alimentacion, _edad), tipo_de_reproduccion(_tipo_de_reproduccion) {}
    void mostrar() override
    {
        cout << "****DATOS DEL MAMIFERO****" << endl;
        Animal::mostrar();
        cout << "TIPO DE REPRODUCCION: " << tipo_de_reproduccion << endl;
    }
    void cazar() override
    {
        cout << "****CAZANDO****" << endl;
        cout << "El mamifero " << nombre << " esta cazando" << endl;
    }
};
int main()
{
    Mamifero m1("leon", 4, "Carnivoro", 3, "sexual");
    m1.mostrar();
    m1.cazar();

    return 0;
}