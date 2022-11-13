#include <stdio.h>
 
int main()
{
    int n, m, flag=0;
    int i,j=0;
    scanf("%d%d", &n, &m);
    int arr[n], brr[m];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<m; i++)
        scanf("%d", &brr[i]);
    for(i=0; i<n;i++)
    {
     if(arr[i]==brr[j])
     {
        flag++;
        j++;
     }
    }
    if(flag == m)
        printf("YES\n");
    else
        printf("NO\n");
    
    
    return 0;
}
