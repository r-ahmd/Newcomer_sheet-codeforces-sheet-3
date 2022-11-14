#include <iostream>
#include <stdio.h>
 
using namespace std;
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
 
    char arr[101][101];
 
    for (int i=1; i <= n; i++)
    {
        for (int j=1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
 
    int x, y;
    scanf("%d%d", &x, &y);
    if (// in the same row
        arr[x][y - 1] != '.' &&
        arr[x][y + 1] != '.' &&
        // in the upper row
        arr[x - 1][y - 1] != '.' &&
        arr[x - 1][y] != '.' &&
        arr[x - 1][y + 1] != '.' &&
        // in the below row
        arr[x + 1][y - 1] != '.' &&
        arr[x + 1][y] != '.' &&
        arr[x + 1][y + 1] != '.' )
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
