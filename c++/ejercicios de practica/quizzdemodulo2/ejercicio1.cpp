#include <iostream>
using namespace std;
int main(void)
{
    float a;
    int i = 0;
    for (a = .0009; a < 1e2; a *= 1e1)
        i++;
    cout << i << endl;

    return 0;
}