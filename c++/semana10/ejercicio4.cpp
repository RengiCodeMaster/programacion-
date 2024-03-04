#include<iostream>
using namespace std;
class Perro
{
    private:
    string nombre;
    string raza;
    public:
    Perro(string _nombre,string _raza):nombre(_nombre),raza(_raza){}
    void mostrar()
    {
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Raza: "<<raza<<endl;
    }
    string getraza()
    {
        return raza;
    }
    void setraza(string _raza)
    {
        raza = _raza;
    }
    
};
int main()
{
    Perro p1("firulais","chusco");
    Perro p2("boby","pitbull");
    p1.setraza("Labrador"); 
    p1.mostrar();
    p2.mostrar();
    
    return 0;
}