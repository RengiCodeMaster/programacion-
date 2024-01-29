#include <iostream>
using namespace std;
int main()
{
    char arr[5]={'a','b','c','d','e'};
    for(int i = 0;i<5; i++) {
        cout<<"*";
        if((arr[i]-arr[i-1])%2)
        continue;
        cout<<"*";
    }

    return 0;
}