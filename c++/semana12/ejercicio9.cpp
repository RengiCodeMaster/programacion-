#include<iostream>
#include<vector>
using namespace std;
class Pila
{
private:
    vector<int>valores;
    public:
    Pila(){}
    void ingreso()
    {
        for(int i=0;i<10;i++)
        {
            int x;
            cout<<"ingrese el valor numero "<<i+1<<": ";
            cin>>x;
            valores.push_back(x);
        }
    }
    void mostrar()
    {
        for(const int &i:valores)
        {
            cout<<i<<" ";
        }
    }
    void eliminar()
    {
        cout<<"eliminando el ultimo valor"<<endl;
        valores.pop_back();
        cout<<"nueva pila: "; 
        mostrar();
    }

};
int main()
{
    Pila p;
    p.ingreso();
    p.eliminar();
    return 0;
}