#include <iostream>
using namespace std;
int main()
{
    float val=100.0;
    do{
        val=val/5;
        cout<<"*";
    }while(val>1.0);
    return 0;
}