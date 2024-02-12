#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    float a = 1000.0;
    while (i > 0)
    {
        i /= 2;
        a /= 10;
    }
    cout << a << endl;

    return 0;
}