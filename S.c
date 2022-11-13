#include <stdio.h>
 
int main()
{
    int n,m, flag=0;
    int i,j,x;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            scanf("%d", &arr[i][j]);
    }
    scanf("%d", &x);
    ///checking if x match with arr elements
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(arr[i][j]==x)
                flag=1;
        }
    }
    if(flag == 0)
        printf("will take number\n");
    else
        printf("will not take number\n");
    
    return 0;
}
