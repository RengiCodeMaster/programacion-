#include <iostream>
using namespace std;
int main()
{
    bool yes = !0;
    bool no = !yes;
    if (!no)
        cout << "true";
    else
        cout << "false";

    return 0;
}