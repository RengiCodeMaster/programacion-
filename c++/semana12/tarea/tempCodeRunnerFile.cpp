/*3.	Herencia Múltiple
Crea una situación que requiera el uso de herencia múltiple. Diseña una 
jerarquía de clases donde una clase base tiene al menos dos clases derivadas. 
A continuación, crea una clase que herede de ambas clases derivadas. Demuestra 
cómo se heredan las propiedades y métodos de ambas clases.
*/
#include<iostream>
using namespace std ;
class Papa
{
    protected:
    string apellidopaterno;
    public:
    Papa(string a):apellidopaterno(a){}
    void mostrar()
    {
        cout<<"Apellido Paterno: "<<apellidopaterno<<endl;
    }
};
class Mama
{
    protected:
    string apellidomaterno;
    public:
    Mama(string a):apellidomaterno(a){}
    void mostrar()
    {
        cout<<"Apellido Materno: "<<apellidomaterno<<endl;
    }
};
class Hijo:public Mama,public Papa
{
    private:
    string nombre;
    int edad;
    public:
    Hijo(string a,string b,string n,int c):Papa(a),Mama(b),nombre(n),edad(c){}
    void mostrar()
    {
        cout<<"Nombre: "<<nombre<<endl;
        Papa::mostrar();
        Mama::mostrar();
        cout<<"Edad: "<<edad<<endl;
    }
};
int main()
{
    Hijo p("rengifo","fretel","juan",20);
    p.mostrar();
    return 0;
}