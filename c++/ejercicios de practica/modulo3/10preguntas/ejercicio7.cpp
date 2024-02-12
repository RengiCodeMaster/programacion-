#include <iostream>
using namespace std;
int fun(void)
{
    return 1;
}
int fun(int p)
{
    return 1 + p;
}
int fun(int p, int q)
{

    return 2 + p + q;
}
int main()
{
    cout << fun() + fun(1) + fun(1, 2) << endl;
    return 0;
}