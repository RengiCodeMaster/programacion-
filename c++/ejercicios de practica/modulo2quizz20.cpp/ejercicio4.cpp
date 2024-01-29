#include <iostream>
using namespace std;
int main()
{
    double big =1e15;
    double small =1e-15;
    cout<<fixed<<big+small;
    return 0;
}