#include <iostream>
using namespace std;
int llenar()
{
    int r;
    cout << "ingrese el numero: ";
    cin >> r;

    return r;
}
char transformar(int &a, int &b)
{
    char devolver,devolver2;
    devolver=static_cast<char>(a);
    cout<<"\na transformacionde a es "<< devolver<<endl;
    devolver2=static_cast<char>(b);
    cout<<"\nLa transformacionde b es "<< devolver2<<endl;
    return devolver,devolver2;
}

int main()
{
    int a, b;
    a = llenar();
    b = llenar();
    transformar(a,b);

    return 0;
}