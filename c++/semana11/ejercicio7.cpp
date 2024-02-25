#include <iostream>
using namespace std;
class Persona
{
protected:
    string nombre;

public:
    Persona(string _nombre) : nombre(_nombre) {}
    virtual void informacion()
    {
        cout << "NOMBRE: "<<nombre<<endl; 
    }
};
class Administrativo : public Persona
{
private:
    string cargo;
    public:
    Administrativo(string nombre,string _cargo):Persona(nombre),cargo(_cargo){}
    void informacion() override
    {
        cout<<"***INFORMACION***"<<endl;
        Persona::informacion();
        cout<<"CARGO: "<<cargo<<endl;
    }
};
int main()
{
    Administrativo p("Juan","Vigilante");
    p.informacion();
    return 0;
}