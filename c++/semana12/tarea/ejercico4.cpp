/*4.	Aplicación Práctica de Herencia
Imagina que estás creando un sistema para una biblioteca. Diseña una jerarquía
de clases que represente diferentes tipos de recursos bibliográficos, como libros,
revistas y periódicos. Utiliza la herencia para compartir propiedades comunes y añade
propiedades específicas para cada tipo de recurso. Crea instancias de estas clases y
demuestra cómo la herencia simplifica la manipulación de estos recursos en el sistema
de la biblioteca.
*/
#include <iostream>
using namespace std;
class Biblioteca
{
protected:
    string nombre;
    string tipo;
    string direccion;

public:
    Biblioteca(string n, string t, string b) : nombre(n), tipo(t), direccion(b) {}

    virtual void leer() = 0;
};
class Libros : public Biblioteca
{
private:
    int numerodepaginas;

public:
    Libros(string n, string d, int x) : Biblioteca(n, d, ""), numerodepaginas(x) {}
    void leer() override
    {
        cout << "El libro " << nombre << " tipo " << tipo << " esta siendo leido" << endl;
        cout<<"Numero de paginas: "<<numerodepaginas<<endl;
    }
};
class Periodico : public Biblioteca
{
private:
    string fecha;

public:
    Periodico(string n, string d, string f) : Biblioteca(n, d, ""), fecha(f) {}
    void leer() override
    {
        cout << "El periodico " << nombre << "  tipo  " << tipo << " fue leido el " << fecha << endl;
    }
};
int main()
{
    Biblioteca *l[2];
    l[0]=new Libros("paco yunque","novela",50);
    l[1]=new Periodico("deport","deportivo","3/03/2024");
    for(int i=0;i<2;i++)
    {
        l[i]->leer();
    }
    for(int i=0;i<2;i++)
    {
        delete l[i];
    }
    return 0;
}