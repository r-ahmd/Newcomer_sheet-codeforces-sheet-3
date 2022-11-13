#include <stdio.h>
 
int main()
{
    int n,arr[1000],brr[1000];
    int i,j;
    int p=0,same=0;
    scanf("%d", &n);
    //taking input array a
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //checking how many inputs are same
        for(int k=0;k<i;k++)
        {
            if(arr[k]==arr[i])
                same++;
        }
    }
    for(i=0;i<n;i++)
        scanf("%d", &brr[i]);
    //matching a elements to b
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(arr[i]==brr[j])
                p++;
    }
    //for same input extra value of p excluded.
    p=p-same*2;    
  
    if(p==n)
        printf("yes\n");
    else
        printf("no\n");
 
    return 0;
}
