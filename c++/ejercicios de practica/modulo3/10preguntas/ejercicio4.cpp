#include <iostream>
using namespace std;
int fun(int p)
{

    int cnt = 0;
    for (p = 2 * p; p > 0; p >>= 2)
        cnt++;
    return cnt;
}
void foon(int p)
{
    for (int cnt = fun(p); cnt > 0; cnt--)
        cout << "*";
}
int main()
{
    foon(2);
    cout << endl;

    return 0;
}