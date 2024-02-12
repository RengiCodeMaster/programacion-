#include <iostream>
using namespace std;
int fun1(int p)
{

    ++p;
    return p++;
}
int fun2(int &p)
{
    ++p;
    return p++;
}
int main()
{
    int a = 1, b, c;
    b = fun1(a);
    c = fun2(b);
    cout << a + b + c << endl;

    return 0;
}