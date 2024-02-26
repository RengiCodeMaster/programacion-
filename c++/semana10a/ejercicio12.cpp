/*Crea una clase base Personaje con atributos como nombre y salud. Luego, define subclases
como Guerrero, Mago y Arquero que hereden de Personaje y añadan habilidades específicas para cada
tipo de personaje.*/
#include <iostream>
using namespace std;
class Personaje
{
protected:
    string nombre;
    string salud;

public:
    Personaje(string _nombre, string _salud) : nombre(_nombre), salud(_salud) {}
    void mostrainformacion() const
    {
        cout << "Nombre: "<< nombre << endl;
        cout << "SALUD: "<<salud<<endl;
    }
};
class Guerrero : public Personaje
{
private:
    string habilidad;

public:
    Guerrero(string _nombre, string _salud, string _habilidad) : Personaje(_nombre, _salud), habilidad(_habilidad) {}
    void mostrar1()
    {
        Personaje::mostrainformacion();
        cout <<"HABILIDAD: "<<habilidad;
    }
};
class Mago:public Personaje
{
    private:
    string habilidad2;
    public:
    Mago(string _nombre,string _salud,string _habilidad2):Personaje(_nombre,_salud),habilidad2(_habilidad2){}
    void mostrar2()
    {
        Personaje::mostrainformacion();
        cout<<"HABILIDAD: "<<habilidad2<<endl;
    }
};
class Arquero:public Personaje
{
    private:
    string habilidad3;
    public:
    Arquero(string nombre,string salud,string _habilidad3):Personaje(nombre,salud),habilidad3(_habilidad3){}
    void mostrar3()
    {
        Personaje:mostrainformacion();
        cout<<"HABILIDAD: "<<habilidad3<<endl;
    }
};
int main()
{
    Guerrero g1("nilver","estable","pelear con gatos");
    Arquero a1("juan","super buena","tapar tiros de fuego");
    Mago m1("brennis","buena","convertirte en sapo");
    cout<<"****GUERRERO****"<<endl;
    g1.mostrar1();
    cout<<"\n****MAGO****"<<endl;
    m1.mostrar2();
    cout<<"****ARQUERO****"<<endl;
    a1.mostrar3();
    return 0;
}