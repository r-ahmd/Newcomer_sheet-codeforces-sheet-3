#include <stdio.h>
 
int main()
{
    int n,m;
    long long int arr[100][100];
    int i,j,k;
    
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            scanf("%lld", &arr[i][j]);
    }
    long long int mrr[n][m];
    for(i=0; i<n; i++)
    {
        ///j=m-1 bcz the previous last value is now first value
        for(j=m-1,k=0 ;j>=0,k<m ;j--, k++)
                mrr[i][k] = arr[i][j];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%lld ", mrr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
