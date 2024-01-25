#include <iostream>
using namespace std;
int main()
{
    int i = 10, j = i++, k = --i;
    if (i > 0)
        j++;
    else
        k++;
    if (k == 0)
        i++;
    else if (k > 0)
        k--;
    else
        k++;
    cout << i * j * k;

    return 0;
}