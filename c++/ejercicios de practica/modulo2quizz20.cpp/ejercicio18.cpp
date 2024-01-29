#include <iostream>
using namespace std;
struct sct
{
    int t[2];
};
struct str
{
    sct t[2];
};
int main()
{
    str t[2] = {{0, 2, 4, 6}, {1, 3, 5, 7}};
    cout << t[1].t[0].t[1] << t[0].t[1].t[0];

    return 0;
}