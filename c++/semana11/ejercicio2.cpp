/*Clase Libro:
Atributos: Título, autor, ISBN, género, número de copias disponibles, etc.
Métodos: Obtener información del libro, prestar libro, devolver libro.*/
#include <iostream>
using namespace std;
class Libro
{
private:
    string titulo;
    string autor;
    string genero;
    int copiDisponibles;

public:
    Libro(string _titulo, string _autor, string _genero, int _copiDisponibles) : titulo(_titulo), autor(_autor), genero(_genero), copiDisponibles(_copiDisponibles) {}
    void mostrarinformacion()
    {
        cout << "****INFORMACION DEL LIBRO****" << endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Genero: " << genero << endl;
        cout << "Copias Disponibles: " << copiDisponibles << endl;
    }
    void prestarlibro()
    {
        if (copiDisponibles > 0)
        {
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
        copiDisponibles++;
        cout << "Se ha devuelto el libro" << endl;
        cout << "No hay copias disponibles" << endl;
    }
};
int main()
{
    Libro l1("hercules", "Juan", "ciencia ficcion", 4);
    l1.mostrarinformacion();
    l1.prestarlibro();
    l1.prestarlibro();
    l1.devolverlibro();
    return 0;
}
