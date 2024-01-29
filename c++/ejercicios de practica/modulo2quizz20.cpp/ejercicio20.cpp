#include <iostream>
using namespace std;
int main()
{
    int i = 3, j = 0;
    do
    {
        i--;
        j++;
    } while (i >= 0);
    cout << j;

    return 0;
}