#include <iostream>
using namespace std;
int main()
{
    int g[3][3] = {{2, 4, 8}, {3, 6, 9}, {5, 10, 15}};
    for (int i = 2; i >= 0; i--)
        for (int j = 0; j < 3; j++)
            g[i][j] += g[j][i];
    cout << g[1][1];

    return 0;
}