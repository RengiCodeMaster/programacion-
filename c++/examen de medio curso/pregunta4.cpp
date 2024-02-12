#include <iostream>
using namespace std;
int producto(int &a, int &b, int &c, int &d)
{





























































    
    return a * b * c * d;
}
int main()
{
    int a = 2, b = 8, c = 2, d = 7;
    int resultado;
    resultado = producto(a, b, c, d);
    cout << "El producto es: " << resultado << endl;
    return 0;
}