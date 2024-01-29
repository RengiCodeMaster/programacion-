#include <iostream>
using namespace std;
int main()
{
    for (float val = -10.0; val < 100.0; val = -val * 2)
    {
        if (val < 0 && -val >= 40)
            break;
        cout << "*";
    }
    return 0;
}