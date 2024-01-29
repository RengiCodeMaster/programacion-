#include <iostream>
using namespace std;
int main(void)
{
    int i = 1, j = 2;
    if (i > j && j > i)
        i++;
    if (i > j || j > i)
        j++;
        if(i|j)
        j++;
    cout << i * j << endl;

    return 0;
}