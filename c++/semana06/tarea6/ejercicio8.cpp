/*Ejercicio 2: Libros*/
#include <iostream>
#include <vector>
using namespace std;
struct libros
{
    string titulo;
    string autor;
    int publicacion;
};
int main()
{
    vector<libros> cantidad_delibros;
    int n;
    cout << "\nIngrese la cantidad de libros: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        libros informacion;
        cout << "\nIngrese el titulo del libro " << i + 1 << ": ";
        cin >> informacion.titulo;
        cout << "\nIngrese el mombre del autor del libro " << i + 1 << ": ";
        cin >> informacion.autor;
        cout << "\nIngrese la fecha de publicacion del libro " << i + 1 << ": ";
        cin >> informacion.publicacion;
        cantidad_delibros.push_back(informacion);
    }
    cout << "\nINFORMACION DE LOS LIBROS\n";
    for (const libros &informacion : cantidad_delibros)
    {
        cout << "\nTITULO: " << informacion.titulo;
        cout << "\nAUTOR: " << informacion.autor;
        cout << "\nFECHA DE PUBLICACION: " << informacion.publicacion << "\n";
    }

    return 0;
}