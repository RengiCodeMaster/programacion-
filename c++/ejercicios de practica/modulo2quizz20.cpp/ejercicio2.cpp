#include <iostream>
using namespace std;
int main()
{

    int a[] = {4, 0, 3, 1, 2};
    int b[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    
        b[a[i]]=b[4-i];
        cout<<b[0]<<b[4];
    

    return 0;
}