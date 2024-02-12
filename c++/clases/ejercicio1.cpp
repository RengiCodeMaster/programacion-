#include <iostream>
using namespace std;
class Personas
{
private://atributos(encapsular  los atributos)
    string nombre;
    int edad;

public://metodos
    Personas(string a,int b) : nombre(a),edad(b){}//constructor
    void leer();
    void correr();
};
//constructor,para inicializar los atributos 
void Personas::leer()
{
    cout<<"soy "<<nombre<<" tengo "<<edad<<" anios"<<" y estoy leyendo un libro"<<endl;
}
void Personas::correr()
{
    cout<<"soy "<<nombre<<" tengo "<<edad<<" anios"<<" y estoy corriendo"<<endl;
}
int main()
{
    Personas p1=Personas("juan",21);
    Personas p2("brennis",20);
    p1.correr();
    p2.leer();
    return 0;
}