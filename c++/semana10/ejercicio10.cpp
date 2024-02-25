#include<iostream>
#include<string>
using namespace std ;
class Padre
{
    protected:
    string nombre;
    string apellido;
    int edad;
    public:
    Padre(string _nombre,string _apellido,int _edad):nombre(_nombre),apellido(_apellido),edad(_edad){}
    void mostrarInformacion() const
    {
        cout<<"NOMBRE: "<<nombre<<endl;
        cout<<"APELLIDO: "<<apellido<<endl;
        cout<<"EDAD: "<<edad<<endl;
    }
};
class Hijo:public Padre
{
    private:
    string hobby;
    public:
    Hijo(string _nombre,string _apellido,int _edad,string _hobby):
    Padre(_nombre,_apellido,_edad),hobby(_hobby){}
    void mostrarInformacion() const
    {
        Padre::mostrarInformacion();
        cout<<"HOBBY: "<<hobby<<endl; 
    }

};
int main()
{
    Padre p1("Eduardo","Fretel",61);
    Hijo h1("Sofia","Fretel",38,"hacer ejercicios");
    cout<<"****INFORMACION DEL PADRE****"<<endl;
    p1.mostrarInformacion();
    cout<<"****INFORMACION DE LA HIJA****"<<endl;
    h1.mostrarInformacion();
    return 0;
}
