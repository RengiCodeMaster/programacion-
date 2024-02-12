#include <iostream>
using namespace std;
struct A {
    int a;
    float b;

};
struct B{
    int b;
    float a;
};
struct C{

    A a;
    B b;
};
int main()
{
    C c1={1,2,3,4},c2={5,6,7,8};
    cout<<c1.b.a+c2.a.b<<endl;
    return 0;
}