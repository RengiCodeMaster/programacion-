/*2.	Polimorfismo con Herencia
Amplía la jerarquía de clases de la Tarea 1 para incorporar polimorfismo.
Define una función virtual en la clase base y sobrescríbela en al menos una
de las clases derivadas. Luego, crea un arreglo de punteros a la clase base y
utiliza el polimorfismo para realizar operaciones específicas en cada tipo de vehículo.
*/
#include <iostream>
using namespace std;
class Vehiculo
{
protected:
    string marca;
    string modelo;
    int lanzamiento;

public:
    Vehiculo(string marca, string modelo, int lanzamiento) : marca(marca), modelo(modelo), lanzamiento(lanzamiento) {}
    virtual void mostrarDatos()
    {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Lanzamiento: " << lanzamiento << endl;
    }
    virtual void sonido() = 0;
};
class Automovil : public Vehiculo
{
public:
    int puertas;
    Automovil(string marca, string modelo, int lanzamiento, int puertas) : Vehiculo(marca, modelo, lanzamiento), puertas(puertas) {}
    void mostrarDatos() override
    {
        Vehiculo::mostrarDatos();
        cout << "Puertas: " << puertas << endl;
    }
    void sonido() override
    {
        cout << " tit tit" << endl;
    }
};
class Motocicleta : public Vehiculo
{
private:
    string tipo;

public:
    Motocicleta(string marca, string modelo, int lanzamiento, string tipo) : Vehiculo(marca, modelo, lanzamiento), tipo(tipo) {}
    void mostrarDatos() override
    {
        Vehiculo::mostrarDatos();
        cout << "Tipo: " << tipo << endl;
    }
    void sonido() override
    {
        cout << "sonido" << endl;
        cout << "run run run" << endl;
    }
};
int main()
{

    Vehiculo *vehiculos=new Automovil("toyota","corrlla",2024,4);
    vehiculos->mostrarDatos();
    vehiculos->sonido();
    delete vehiculos;
    return 0;
}
