#include <iostream>
using namespace std;
class Base
{
private:
    int variablePrivate;

public:
    Base(int valor) : variablePrivate(valor) {}
    int obtenerVariablePrivate()
    {
        return variablePrivate;
    }
    void mostrarVariablePrivate()
    {
        cout << "El valor de variablePrivate es: " << variablePrivate << endl;
    }
};

class Derivada : public Base
{
private:
int valor2;
public:
    Derivada(int variablePrivate ,int _valor2) : Base(variablePrivate),valor2(_valor2) {}

    void otroMetodo()
    {
        Base::mostrarVariablePrivate();
        cout<<"El valor de valor2 es: "<<valor2<<endl;
        cout << "El valor de variablePrivate es: " << obtenerVariablePrivate() << endl;
    }
};

int main()
{
    Derivada objDerivada(10,20);
    objDerivada.otroMetodo(); // Llamamos a otroMetodo de la clase derivada

    return 0;
}
