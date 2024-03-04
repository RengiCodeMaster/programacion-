#include<iostream>
using namespace std;
class Padre
{
    private:
    string nombre;
    string apellido;
    public:
    Padre(string _nombre,string _apellido):nombre(_nombre),apellido(_apellido){}
    virtual void mostrar()
    {
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Apellido: "<<apellido<<endl;
    }
    string getNombre()
    {
        return nombre;
    }
    string getApellido()
    {
        return apellido;
    }
    void setNombre(string _nombre)
    {
        nombre=_nombre;
    }
    void setApellido(string _apellido)
    {
        apellido=_apellido;
    }

};
class  Hijo:public Padre
{
    private:
    int edad;
    public:
    Hijo(string _nombre,string _apellido,int _edad):Padre(_nombre,_apellido),edad(_edad){}
    void mostrar()override
    {
        Padre::mostrar();
        cout<<"Edad: "<<edad<<endl;
    }
};
class Esposa:public Padre
{
    private:
    int años_de_casada;
    public:
    Esposa(string _nombre,string _apellido,int _años_de_casada):Padre(_nombre,_apellido),años_de_casada(_años_de_casada){}
    void mostrar()override
    {
        Padre::mostrar();
        cout<<"tiempo de casada: "<<años_de_casada<<endl;
    }
};
int main()
{
    Padre *p1=new Hijo("Juan","Perez",20);
    p1->mostrar();
    delete p1;
    Esposa p("Maria","Lopez",10);
    p.setNombre("Ana");
    p.mostrar();
    return 0;
}