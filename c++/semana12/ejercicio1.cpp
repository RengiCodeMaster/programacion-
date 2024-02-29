#include<iostream>
#include<fstream>
using namespace std;
class Perro
{
private:
    string nombre[10];
    int edad;
    string raza;
public:
    Perro() {}
    void guardarperrosentxt()
    {
        ofstream archivo;
        archivo.open("perros.txt", ios::out);
        if (archivo.fail())
        {
            cout << "No se pudo abrir el archivo";
            exit(1);
        }
        for (int i = 0; i < 2; i++)
        {
            archivo << "Nombre del perro: " << nombre[i] << endl;
            archivo << "Edad del perro: " << edad << endl;
            archivo << "Raza del perro: " << raza << endl;
        }

        archivo.close();
    }
    void ingresoDeDatos()
    {
        for (int i = 0; i < 2; i++) {
            cout << "Ingrese el nombre del perro: ";
            cin >> nombre[i];
            cout << "Ingrese la edad del perro: ";
            cin >> edad;
            cout << "Ingrese la raza del perro: ";
            cin >> raza;
        }
        guardarperrosentxt();
    }
    void MostrarElementos()
    {
        for(int i=0; i<2; i++)
        {
            cout << "Nombre del perro: " << nombre[i] << endl;
            cout << "Edad del perro: " << edad << endl;
            cout << "Raza del perro: " << raza << endl;
        }
    }
};
int main()
{
    Perro p1;
    p1.ingresoDeDatos();
    p1.MostrarElementos();
    return 0;
}