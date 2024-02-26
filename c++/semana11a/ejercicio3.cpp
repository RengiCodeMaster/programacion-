#include <iostream>
using namespace std;
class Biblioteca
{
protected:
    string titulo;
    string autor;
    string fecha;

public:
    Biblioteca(string _titulo, string _autor, string _fecha)
        : titulo(_titulo), autor(_autor), fecha(_fecha) {}
    virtual void mostrarinformacion()
    {
        cout << "****INFORMACION DEL LIBRO****" << endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Fecha de publicacion: " << fecha << endl;
    }
};
class Libro : public Biblioteca
{
private:
    string genero;
    int copiDisponibles;

public:
    Libro(string _titulo, string _autor, string _genero, int _copiDisponibles, string _fecha)
        : Biblioteca(_titulo, _autor, _fecha), genero(_genero), copiDisponibles(_copiDisponibles) {}
    void mostrarinformacion() override
    {
        Biblioteca::mostrarinformacion();
        cout << "Genero: " << genero << endl;
        cout << "Copias Disponibles: " << copiDisponibles << endl;
    }
    void prestarlibro()
    {
        if (copiDisponibles > 0)
        {
            cout<<"****PRESTAMO DE LIBRO****"<<endl;
            copiDisponibles--;
            cout << "Se ha prestado el libro" << endl;
            cout << "Copias disponibles: " << copiDisponibles << endl;
        }
        else
        {
            cout << "No hay copias disponibles" << endl;
        }
    }
    void devolverlibro()
    {
        cout<<"****DEVOLUCION DE LIBRO****"<<endl;
        copiDisponibles++;
        cout << "Se ha devuelto el libro" << endl;
        cout << "Copias disponibles: " << copiDisponibles << endl;
    }
};
int main()
{
    Libro l1("hercules", "Juan", "ciencia ficcion", 4, "12/12/2020");
    l1.mostrarinformacion();
    l1.prestarlibro();
    l1.prestarlibro();
    l1.devolverlibro();
    return 0;
}