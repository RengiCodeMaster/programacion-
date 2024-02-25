/*Ejercicio de Clases Amigas Recíprocas:
Crea dos clases, C y D.
Haz que C sea amiga de D y viceversa.
Declara algunos miembros privados en ambas clases.
Define funciones amigas en ambas clases que puedan
acceder a los miembros privados de la otra clase.
En la función principal, crea instancias de C y D,
llama a las funciones amigas y muestra información.*/
#include <iostream>
using namespace std;
class C;
class D
{
private:
    string nombre;

public:
    D(string _nombre) : nombre(_nombre) {}
    friend class C;
    void display()
    {
        cout << "MY NAME IS " << nombre << endl;
    }
};
class C
{
private:
    string lastname;

public:
    C(string _lastname) : lastname(_lastname) {}
    friend class D;
    void display()
    {
        cout << "MY LAST NAME IS " << lastname << endl;
    }
};
int main()
{
    D d1("juan");
    C c1("rengifo");
    d1.display();
    c1.display();
    return 0;
}
