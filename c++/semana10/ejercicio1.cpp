#include <iostream>
using namespace std;
class Silla
{
    private:
    string diseño;
    string nombre;
    double peso;
    double soprte_de_peso;
    public:
    Silla(string _diseño,string _nombre,double _peso,double _soprte_de_peso):diseño(_diseño),nombre(_nombre),peso(_peso),soprte_de_peso(_soprte_de_peso){}
    void sentarse()
    {
        cout<<"Me sentare en la silla "<<nombre<<" de modelo "<<diseño<<" con un peso de "<<peso<<" y soporta un peso de "<<soprte_de_peso<<endl;
    }
};
int main()
{
    Silla s1("maderin","curvo",5.0,100.0);
    s1.sentarse();
    return 0;
}