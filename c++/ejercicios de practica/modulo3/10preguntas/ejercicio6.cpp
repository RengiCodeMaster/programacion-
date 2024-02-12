#include <iostream>
using namespace std;
int fun(int p = 2, int q = 3)
{
    return p + q;
}
int main()
{
    cout << fun() + fun(1) + fun(1, 2) << endl;
    return 0;
}