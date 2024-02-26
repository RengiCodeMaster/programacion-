#include<iostream>
#include<vector>
using namespace std;
class Universidad
{
    protected:
    string nombre;
    string direccion;
    string facultad;
    public:
    Universidad(string _nombre, string _direccion, string _facultad):nombre(_nombre),direccion(_direccion),facultad(_facultad){}
    string obtenernombre() const {return nombre;}
    string obtenerdireccion() const {return direccion;}
    string obtenerfacultad() const {return facultad;}
    void mostrarInformacion() const
    {
        cout<<"Nombre: "<<nombre<<", Direccion: "<<direccion<<", Facultad: "<<facultad<<endl;
    }
    
};
class Estudiante:public Universidad
{
    private:
    int edad;
    string carrera;
    string ciclo;
    public:
    Estudiante(string _nombre, string _direccion, string _facultad, int _edad, string _carrera,string _ciclo):Universidad(_nombre,_direccion,_facultad),edad(_edad),carrera(_carrera),ciclo(_ciclo){}
    int obteneredad() const {return edad;}
    string obtenercarrera() const {return carrera;}
    void mostrarInformacion() const
    {
        Universidad::mostrarInformacion();
        cout<<"Edad: "<<edad<<", Carrera: "<<carrera<<endl;
    }
};
int main()
{
    Universidad u1("Universidad Nacional Mayor de San Marcos","Av. Universitaria","Ingenieria de Sistemas e Informatica");
    Estudiante e1("Juan Perez","Av. Universitaria","Ingenieria de Sistemas e Informatica",20,"Ingenieria de Sistemas","Ciclo 1");
    cout<<"Informacion de la universidad: "<<endl;
    u1.mostrarInformacion();
    cout<<"Informacion del estudiante: "<<endl;
    e1.mostrarInformacion();
    return 0;

}