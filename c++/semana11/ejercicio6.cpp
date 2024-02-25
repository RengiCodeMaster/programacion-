#include <iostream>
#include <vector>
using namespace std;

class Pilas
{
private:
    vector<int> pila;

public:
    Pilas() {}

    void ingresoDeDatos()
    {
        for (int i = 0; i < 10; i++)
        {
            int valor;
            cout << "ingrese el valor " << i + 1 << " de la pila: ";
            cin >> valor;
            pila.push_back(valor);
        }
    }

    void QuitarElemento()
    {
        if (!pila.empty())
        {
            cout << "quitando el ultimo elemento de la pila" << endl;
            pila.pop_back();
        }
        else
        {
            cout << "la pila esta vacia" << endl;
        }
    }

    void MostrarElementos()
    {
        cout << "elementos en la pila:" << endl;
        for (int i = 0; i < pila.size(); i++)
        {
            cout << pila[i] << endl;
        }
    }
};

int main()
{
    Pilas p1;
    p1.ingresoDeDatos();
    p1.QuitarElemento();
    p1.QuitarElemento();
    p1.QuitarElemento();
    p1.QuitarElemento();
    p1.MostrarElementos();
    return 0;
}
