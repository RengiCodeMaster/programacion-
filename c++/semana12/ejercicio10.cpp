#include<iostream>
using namespace std;
class A
{
    protected:
    string nombre;
    public:
    A(string x):nombre(x){}
    virtual void mostrar()
    {
        cout<<"A: "<<nombre<<endl;
    }
};
class B:public A
{
    private:
    string apellido;
    int edad;
    public:
    B(string x,string y,int z):A(x),apellido(y),edad(z){}
    void mostrar()override
    {
        A::mostrar();
        cout<<apellido<<endl;
        cout<<edad<<endl;
    }
};
class C:public B
{
    private:
    string direccion;
    public:
    C(string x,string y,int z,string w):B(x,y,z),direccion(w){}
    void mostrar()override
    {
        A::mostrar();
        B::mostrar();
        cout<<direccion<<endl;
    }
};
int main()
{
    C c("Luis","Gomez",25,"Av. Los Alamos 123");
    c.mostrar();
    return 0;
    
}
