#include <iostream>
using namespace std;
int main()
{
    bool yes=!false;
    bool no=!yes;
    if(!no)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}