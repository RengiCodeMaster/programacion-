#include <iostream>
using namespace std;
class Ejercicio
{
private:
    int var1;
    int var2;

public:
    Ejercicio(int _var1, int _var2) : var1(_var1), var2(_var2) {}
    void mostar()
    {
        cout << var1 << endl;
        cout << var2 << endl;
    }
    int getvar2()
    {
        return var2;
    }
    void setvar2(int _var2)
    {
        var2 = _var2;
    }
};
int main()
{
    Ejercicio e1(8, 2);
    e1.setvar2(15);
    e1.mostar();
    return 0;
}