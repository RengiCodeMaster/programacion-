/*Crea una clase llamada Fecha que tenga los siguientes atributos privados: dia, mes,
ano, hora. Esta clase debe tener un constructor que inicialice
estos atributos y una función mostrar() que imprima la fecha y la hora.
Crea una clase llamada Cita que tenga los siguientes atributos privados:
persona1, persona2, lugar y fecha. La fecha debe ser un objeto de la
clase Fecha. Esta clase debe tener un constructor que inicialice estos
atributos y una función mostrar() que imprima los detalles de la cita.
En la función main(), crea un objeto de la clase Cita e inicialízalo con
los valores que desees. Luego, llama a la función mostrar() del objeto para
imprimir los detalles de la cita.*/
#include <iostream>
using namespace std;
class Fecha
{
private:
    int dia, mes, anio, hora;

public:
    Fecha(int d, int m, int a, int h) : dia(d), mes(m), anio(a), hora(h) {}
    void mostrar()
    {
        cout << "La fecha es: " << dia << "/" << mes << "/" << anio << " y la hora es: " << hora << endl;
    }
};
class Cita
{
private:
    string persona1, persona2, lugar;
    Fecha fecha;

public:
    Cita(string p1,string p2,string L,Fecha f):persona1(p1),persona2(p2),lugar(L),fecha(f) {}
    void mostrar(){
        cout<<"La cita de "<<persona1<<" y "<<persona2<<" lugar: "<<lugar<<endl;
        fecha.mostrar();
    }
};
int main()
{
    Cita cita("brennis", "vochi", "brisas del hullaga", Fecha(1, 1, 2024, 14));
    cita.mostrar();
    return 0;
}