#include<iostream>
using namespace std;
class Mascota
{
private:
    string nombre;
    int edad;
    public:
    Mascota(){}
    int getEdad()
    {
        return edad;
    }
    string getNombre()
    {
        return nombre;
    }
    virtual void ingresarDatos()
    {
        cout<<"Ingrese el nombre de la mascota: ";
        cin>>nombre;
        cout<<"Ingrese la edad de la mascota: ";
        cin>>edad;
    }
};
class Perro:public Mascota
{
private:
    string raza;
    public:
    Perro(){}
    void ingresarDatos()
    {
        Mascota::ingresarDatos();
        cout<<"Ingrese la raza del perro: ";
        cin>>raza;
    }
    void mostrar()
    {
        cout<<"nombre: "<<getNombre()<<endl;
        cout<<"edad: "<<getEdad()<<endl;
        cout<<"raza: "<<raza<<endl;
    }

};

int main()
{
    Perro p;
    p.ingresarDatos();
    p.mostrar();    
    return 0;
}