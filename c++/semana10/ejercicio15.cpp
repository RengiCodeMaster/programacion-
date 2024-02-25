#include<iostream>
using namespace std ;
class Universidad
{
    protected:
    string nombre;
    string ubicacion;
    int ndealumnos;
    public:
    Universidad(string _nombre,string _ubicacion,int _ndealumnos)
    :nombre(_nombre),ubicacion(_ubicacion),ndealumnos(_ndealumnos){}
    virtual void mostrar() 
    {
        cout<<"NOMBRE: "<<nombre<<endl;
        cout<<"UBICACION: "<<ubicacion<<endl;
        cout<<"POSEE "<<ndealumnos<<" ALUMNOS"<<endl;
    }
};
class Publica:public Universidad
{
    private:
    string tipo_de_uni;
    public:
    Publica(string nombre,string ubicacion,int ndealumnos,string _tipo_de_uni)
    :Universidad(nombre,ubicacion,ndealumnos),tipo_de_uni(_tipo_de_uni){}
    void mostrar()override
    {
        Universidad::mostrar();
        cout<<"TIPO DE UNIVERSIDAD: "<<tipo_de_uni<<endl;
    }
};
class privada:public Universidad
{
    private:
    string tipo_de_uni;
    public:
    privada(string nombre,string ubicacion,int ndealumnos,string _tipo_de_uni)
    :Universidad(nombre,ubicacion,ndealumnos),tipo_de_uni(_tipo_de_uni){}
    void mostrar()override
    {
        Universidad::mostrar();
        cout<<"TIPO DE UNIVERSIDAD: "<<tipo_de_uni<<endl;
    }
};
int main()
{
    Publica p1("Universidad Nacional Agraria de la SELVA",
    "Ciudad de Tingo Maria",5000,"Universidad Publica");
    privada p2("Universidad Privada de Huanuco","Ciudad de Huanuco",8000,"Universidad Privada");
    cout<<"DATOS DE LA PRIMERA UNIVERSIDAD"<<endl;
    p1.mostrar();
    cout<<"\nDATOS DE LA SEGUNDA UNIVERSIDAD"<<endl;
    p2.mostrar();
    return 0;
}