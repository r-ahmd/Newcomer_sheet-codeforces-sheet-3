#include <stdio.h>
 
int main()
{
    int n, m;
    int i;
    scanf("%d%d", &n, &m);
    int arr[n],brr[100000]={0};
    
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++)
        brr[arr[i]]++;
    for(i=1; i<=m; i++)
        printf("%d\n", brr[i]);
    
    return 0;
}
