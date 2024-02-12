#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    float a = -1.0;
    while (i < 0)
    {
        a = a + 10.0 * a / -10;
        i--;
    }
    cout << i << endl;
    return 0;
}