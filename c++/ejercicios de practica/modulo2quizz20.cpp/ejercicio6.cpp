#include <iostream>
using namespace std;
int main()
{
    int a=1,b=2;
    int c=a<<b;/*1*4=4*/
    int d=1<<c;/*1*16*/
    int e=d>>d;/*16/2^16*/
    cout<<e;
    return 0;
} 