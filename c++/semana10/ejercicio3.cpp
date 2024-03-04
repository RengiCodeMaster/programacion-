#include<iostream>
using namespace std;
class Gato
{
    private:
    string nombre;
    string tamaño;
    int peso;
    public:
    Gato(string _nombre,string _tamaño,int _peso):nombre(_nombre),tamaño(_tamaño),peso(_peso){}
    void dormir()
    {
        cout<<"El gato "<< nombre <<" es de tamano "<< tamaño <<" y pesa "<<peso<<" kilogramos "<<" esta durmiendo"<<endl;
    }
};
int main()
{
    Gato g1("MAX","grande",18);
    g1.dormir();
    
    return 0;
}