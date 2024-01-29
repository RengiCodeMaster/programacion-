#include <iostream>
using namespace std;
int main()
{
    bool t[5];
    for (int i = 0; i < 5; i++)
        t[4 - i] = !(i % 2);
    cout << t[0] && t[2];

    return 0;
}