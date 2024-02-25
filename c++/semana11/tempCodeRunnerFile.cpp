#include <iostream>
using namespace std;
class Alquiler_De_Vehiculos
{
protected:
    string placa;
    string marca;
    string modelo;

public:
    Alquiler_De_Vehiculos(string _placa, string _marca, string _modelo)
        : placa(_placa), marca(_marca), modelo(_modelo) {}
    virtual void mostrar()
    {
        cout << "****DATOS DEL VEHICULO****" << endl;
        cout << "PLACA: " << placa << endl;
        cout << "MARCA: " << marca << endl;
        cout << "MODELO: " << modelo << endl;
    }
    virtual void alquilar() = 0;
};
class Auto : public Alquiler_De_Vehiculos
{
private:
    string tipo_de_auto;
    int tiempo_de_alquiler;

public:
    Auto(string _placa, string _marca, string _modelo, string _tipo_de_auto, int _tiempo_de_alquiler)
        : Alquiler_De_Vehiculos(_placa, _marca, _modelo), tipo_de_auto(_tipo_de_auto), tiempo_de_alquiler(_tiempo_de_alquiler) {}
    void mostrar() override
    {
        Alquiler_De_Vehiculos::mostrar();
        cout << "TIPO DE AUTO: " << tipo_de_auto << endl;
        cout << "TIEMPO DE ALQUILER: " << tiempo_de_alquiler << " horas" << endl;
    }
    void alquilar() override
    {
        cout << "****ALQUILANDO****" << endl;
        cout << "El auto con placa " << placa << " se alquilo por " << tiempo_de_alquiler << " horas" << endl;
    }
};
int main()
{
    Auto a1("A1-123", "Toyota", "Raptor", "4 x 4", 5);
    a1.mostrar();
    a1.alquilar();

    return 0;
}