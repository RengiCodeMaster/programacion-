#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 2, k;
    i = i << j;
    j = j << i;
    k = j >> i;
    cout << k << endl;
    ;

    return 0;
}