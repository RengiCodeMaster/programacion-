#include <iostream>
using namespace std;
class Clase
{
private:
    int dato1;
    int dato2;

public:
    Clase(int _dato1, int _dato2) : dato1(_dato1), dato2(_dato2) {}
    void mostrar()
    {
        cout << "LOS DATOS SON: " << dato1 << " y " << dato2 << endl;
    }
    void suma()
    {
        int x;
        x=dato1+dato2;
        cout<<"la suma de "<<dato1<<" y "<<dato2<<" es: "<<x<<endl;
    }
    int getdato2()
    {
        return dato2;
    }
    void setdato2(int _dato2)
    {
        dato2 = _dato2;
    }
};
int main()
{
    Clase d1(2,8);
    d1.setdato2(20);
    d1.mostrar();
    d1.suma();  
    return 0;
}