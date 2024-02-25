#include <iostream>
using namespace std;
class Peleador
{
protected:
    string nombre;

public:
    Peleador(string _nombre) : nombre(_nombre) {}
    virtual void mostrar()
    {
        cout << "Mi nombre es: " << nombre << endl;
    }
};
class Samurai : public Peleador
{
private:
    string habilidad;
    int nivel;

public:
    Samurai(string nombre, string _habilidad, int _nivel) :
    Peleador(nombre),habilidad(_habilidad), nivel(_nivel) {}
    void mostrar() override
    {
        Peleador::mostrar();
        cout << "Mi habilidad de pelea es " << habilidad << " y mi nivel de pelea es " << nivel << endl;
    }
    void clasificacion()
    {
        cout << "****NIVEL DE PELEA****" << endl;

        if (nivel > 100)
        {
            cout << "Soy un luchador de clase alta" << endl;
        }
        else
        {
            int x;
            x = 100 - nivel;
            cout << "Tu nivel de pelea es muy bajo entrena mas solo te falta " << x << " de poder y alcanzaras el exito" << endl;
        }
    }
};
int main()
{
    Samurai k1("juan", "romper huesos con las manos", 200);
    k1.mostrar();
    k1.clasificacion();
    return 0;
}