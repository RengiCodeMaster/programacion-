#include <iostream>
using namespace std;
class Soldado
{
private:
    string nombre;
    int nivel;

public:
    Soldado(string _nombre) : nombre(_nombre), nivel(100) {}
    void mostrar()
    {
        cout << "NOMBRE: " << nombre<<endl;
        cout << "NIVEL: " <<nivel<< endl;
    }
    void diparo()
    {
        if (nivel > 0)
        {
            cout << "AHHH me hirieron, ";
            nivel -= 20;
            cout << "Nivel de vida actual: " << nivel << endl;
        }
        else
        {
            cout << "SOLDADO CAIDO " << endl;
        }
    }
};
int main()
{
    Soldado p1("Terrax");
    p1.mostrar();
    p1.diparo();
    p1.diparo();
    p1.diparo();
    p1.diparo();
    p1.diparo();
    p1.diparo();

    return 0;
}