/*1.	Creación de una Jerarquía de Clases
Diseña una jerarquía de clases que represente vehículos. Incluye una clase base
"Vehiculo" y al menos dos clases derivadas que representen tipos específicos de 
vehículos (por ejemplo, "Automovil" y "Motocicleta"). Añade propiedades y métodos 
relevantes a cada clase. Luego, crea instancias de cada clase y demuestra la herencia.
*/
#include <iostream> 
using namespace std;
class Vehiculos
{
    protected:
    string marca;
    string modelo;
    int lanzamiento;
    public:
    Vehiculos(string marca, string modelo, int lanzamiento):marca(marca),modelo(modelo),lanzamiento(lanzamiento){}
    virtual void mostrarDatos()
    {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Lanzamiento: " << lanzamiento << endl;
    }
};
class Automovil: public Vehiculos
{
    public:
    int puertas;
    Automovil(string marca, string modelo, int lanzamiento, int puertas):Vehiculos(marca,modelo,lanzamiento),puertas(puertas){}
    void mostrarDatos()override
    {
        Vehiculos::mostrarDatos();
        cout << "Puertas: " << puertas << endl;
    }
};
class Motocicleta: public Vehiculos
{
    public:
    string tipo;
    Motocicleta(string marca, string modelo, int lanzamiento, string tipo):Vehiculos(marca,modelo,lanzamiento),tipo(tipo){}
    void mostrarDatos()override
    {
        Vehiculos::mostrarDatos();
        cout << "Tipo: " << tipo << endl;
    }
};
int main()
{
    Automovil auto1("sapito","antiguo",1999,4);
    Motocicleta moto1("yamaha","mt09",2020,"deportiva");
    cout << "Automovil: " << endl;
    auto1.mostrarDatos();
    cout << "Motocicleta: " << endl;
    moto1.mostrarDatos();
    return 0;
}