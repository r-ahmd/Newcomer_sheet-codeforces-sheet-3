#include <stdio.h>
 
int main()
{
    int n, dif;
    int i,j;
    scanf("%d", &n);
    int arr[100][100];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &arr[i][j]);
    }
    ///first diagonals sum when i,j=0
    int first_sum=0, second_sum=0; 
    for(i=0; i<n; i++)
    {
        j=i;
        first_sum += arr[i][j];
    }
    //second  diagonals sum when j's value is decreasing 1 by 1 
    int k=n-1;
    for(i=0; i<n; i++)
    {
        second_sum += arr[i][k--];
    }
    dif = first_sum - second_sum;
    if(dif<0)
        printf("%d\n", dif*-1);
    else
        printf("%d\n", dif);
        
    return 0;
}
