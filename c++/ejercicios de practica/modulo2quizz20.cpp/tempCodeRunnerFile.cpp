#include <iostream>
using namespace std;
struct str{
    int t[3];
    char s[3];
};
int main()
{
    str a={1,2,3,'a','b','c'};
    str b={5,6,7,'x','y','z'};
    cout<<char(b.s[0]+a.t[0])<<int(a.s[2]-a.s[0])<<int(b.s[2]-b.s[1]);
    return 0;
}