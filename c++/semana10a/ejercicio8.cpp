#include <iostream>
#include <string>

using namespace std;

class Empleado
{
protected:
    string nombre;
    double salarioBase;
    int numeroID;

public:
    Empleado(string _nombre, double _salarioBase, int _numeroID)
        : nombre(_nombre), salarioBase(_salarioBase), numeroID(_numeroID) {}

    string obtenerNombre() const { return nombre; }
    double obtenerSalario() const { return salarioBase; }
    int obtenerID() const { return numeroID; }

    virtual double calcularSalario() const
    {
        return salarioBase;
    }

    virtual void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << ", ID: " << numeroID << ", Salario Base: $" << salarioBase << endl;
    }
};

class EmpleadoAsalariado : public Empleado
{
private:
    int diasTrabajadosEnMes;

public:
    EmpleadoAsalariado(string _nombre, double _salarioBase, int _numeroID)
        : Empleado(_nombre, _salarioBase, _numeroID), diasTrabajadosEnMes(0) {}

    void establecerDiasTrabajados(int dias)
    {
        diasTrabajadosEnMes = dias;
    }

    int obtenerDiasTrabajados() const
    {
        return diasTrabajadosEnMes;
    }

    double calcularSalario() const override
    {
        return salarioBase * (static_cast<double>(diasTrabajadosEnMes) / 30.0);
    }

    void mostrarInformacion() const override
    {
        Empleado::mostrarInformacion();
        cout << "Días Trabajados en el Mes: " << diasTrabajadosEnMes << endl;
    }
};

class EmpleadoPorHoras : public Empleado
{
private:
    int horasTrabajadasPorSemana;
    double tarifaPorHora;

public:
    EmpleadoPorHoras(string _nombre, double _tarifaPorHora, int _numeroID)
        : Empleado(_nombre, 0.0, _numeroID), horasTrabajadasPorSemana(0), tarifaPorHora(_tarifaPorHora) {}

    void establecerHorasTrabajadas(int horas)
    {
        horasTrabajadasPorSemana = horas;
    }

    int obtenerHorasTrabajadas() const
    {
        return horasTrabajadasPorSemana;
    }

    void establecerTarifaPorHora(double tarifa)
    {
        tarifaPorHora = tarifa;
    }

    double obtenerTarifaPorHora() const
    {
        return tarifaPorHora;
    }

    double calcularSalario() const override
    {
        return horasTrabajadasPorSemana * tarifaPorHora;
    }

    void mostrarInformacion() const override
    {
        Empleado::mostrarInformacion();
        cout << "Horas Trabajadas por Semana: " << horasTrabajadasPorSemana << ", Tarifa por Hora: $" << tarifaPorHora << endl;
    }
};

class EmpleadoPorComision : public Empleado
{
private:
    double ventasRealizadas;
    double porcentajeComision;

public:
    EmpleadoPorComision(string _nombre, double _porcentajeComision, int _numeroID)
        : Empleado(_nombre, 0.0, _numeroID), ventasRealizadas(0.0), porcentajeComision(_porcentajeComision) {}

    void establecerVentas(double ventas)
    {
        ventasRealizadas = ventas;
    }

    double obtenerVentas() const
    {
        return ventasRealizadas;
    }

    void establecerPorcentajeComision(double porcentaje)
    {
        porcentajeComision = porcentaje;
    }

    double obtenerPorcentajeComision() const
    {
        return porcentajeComision;
    }

    double calcularSalario() const override
    {
        return salarioBase + (ventasRealizadas * (porcentajeComision / 100.0));
    }

    void mostrarInformacion() const override
    {
        Empleado::mostrarInformacion();
        cout << "Ventas Realizadas: $" << ventasRealizadas << ", Porcentaje de Comisión: " << porcentajeComision << "%" << endl;
    }
};

int main()
{
    EmpleadoAsalariado empleadoAsalariado("Juan", 2000.0, 123);
    EmpleadoPorHoras empleadoPorHoras("Maria", 15.0, 456);
    EmpleadoPorComision empleadoPorComision("Carlos", 5.0, 789);

    empleadoAsalariado.establecerDiasTrabajados(25);
    empleadoPorHoras.establecerHorasTrabajadas(40);
    empleadoPorComision.establecerVentas(10000.0);

    cout << "Información del Empleado Asalariado:" << endl;
    empleadoAsalariado.mostrarInformacion();
    cout << "Salario Calculado: $" << empleadoAsalariado.calcularSalario() << endl << endl;

    cout << "Información del Empleado por Horas:" << endl;
    empleadoPorHoras.mostrarInformacion();
    cout << "Salario Calculado: $" << empleadoPorHoras.calcularSalario() << endl << endl;

    cout << "Información del Empleado por Comisión:" << endl;
    empleadoPorComision.mostrarInformacion();
    cout << "Salario Calculado: $" << empleadoPorComision.calcularSalario() << endl;

    return 0;
}

