/*Ejercicio de Clases Amigas con Funciones y Métodos:
Crea una clase E.
Crea una función global que sea amiga de E.
Dentro de la función global, accede a los miembros privados de E.
Dentro de E, declara un método privado.
Haz que la función global pueda acceder al método privado de E.
En la función principal, crea una instancia de E y llama a la 
función global y al método privado.*/
#include<iostream>
using namespace std;
class E;
void funcionglobal( E &e);
class E 
{
    private:
    string dato;
    void metodoprivado()
    {
        cout<<"***ATRAPADAAA***"<<endl;
    }
    friend  void funcionglobal( E &e);
    public:
    E(string _dato):dato(_dato){}
    void mostrardatoprivado()
    {
        cout<<"El miembro privado es: "<<dato<<endl;
    }
};
void funcionglobal( E &e)
{
    cout<<"Accediendo al dato privado desde la funcion global: "<<e.dato<<endl;
    E(e).metodoprivado();
}
int main()
{
    E e1("juan");
    e1.mostrardatoprivado();
    funcionglobal(e1);
    return 0;
}