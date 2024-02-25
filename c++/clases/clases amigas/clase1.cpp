/*Ejercicio de Clases Amigas Simples:
Crea dos clases, A y B.
Haz que A sea una clase amiga de B.
Declara algunos miembros privados en ambas clases.
Define una función amiga en A que pueda acceder a los miembros privados de B.
En la función principal, crea instancias de A y B, llama a la función 
amiga y muestra información.*/
#include <iostream>
using namespace std;
class B;
class A 
{
    private:
    int valor1;
    public:
   
    friend void mostrarinformacion( A &, B &);
};
class B
{
    private:
    int valor2;
    public:
   
    friend void mostrarinformacion( A &, B &);
};
void mostrarinformacion( A &a, B &b)
{
    a.valor1=20;
    b.valor2=10;
    cout<<"valor de A "<<a.valor1<<endl;
    cout<<"valor de B "<<b.valor2<<endl;
}
int main()
{
    A a1;
    B b1;
    mostrarinformacion(a1,b1);
    return 0;
}
