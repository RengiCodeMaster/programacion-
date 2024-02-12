#include <iostream>
using namespace std;
struct A
{
    int a;
    char b;
};
struct B
{
    char a;
    int b;
};
int main()
{
    A a = {2, 'A'};
    B b = {'C', 1};
    cout << b.a - a.b - b.b + a.a << endl;

    return 0;
}