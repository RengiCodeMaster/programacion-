#include <iostream>
using namespace std;
int main()
{
    int i = 3;
    float a = 4;
    bool f1 = i > a, f2 = a > i, f3 = a / i > i / a;
    if (f3)
        if (f2)
            i += 1;
        else
            i += 2;
    else if (f1)
        i += 3;
    else
        i += 4;
    cout << i << endl;

    return 0;
}