#include <iostream>
using namespace std;
class Clase
{
private:
    int value1;
    int value2;

public:
    Clase(int _value1, int _value2) : value1(_value1),value2(_value2){}
    void mostrar()
    {
        cout << "LOS DATOS SON: " << value1 << " y " << value2 << endl;
    }
    void suma()
    {
        int x;
        x=value1+value2;
        cout<<"la suma de "<<value1<<" y "<<value2<<" es: "<<x<<endl;
    }
    int getvalue1()
    {
        return value1;
    }
    void setvalue1(int _value1)
    {
        value1=_value1;
    }
    int getvalue2()
    {
        return value2;
    }
    void setvalue2(int _value2)
    {
        value2 = _value2;
    }
};
int main()
{
    Clase d1(2,8);
    d1.setvalue1(4);
    d1.setvalue2(20);
    d1.mostrar();
    d1.suma();  
    return 0;
}