#include <iostream>
using namespace std;
int fun(void)
{
    return 1;
}
int fun(int p)
{
    return p > 1 ? 1 : 0;
}
int fun(int p, int q)
{
    return q > p ? q - p : p - q;
}
int main()
{
    cout << fun() + fun(1) + fun(1, 2) << endl;

    return 0;
}