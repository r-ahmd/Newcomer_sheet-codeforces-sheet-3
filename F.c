#include <stdio.h>
 
int main()
{
    int size,i;
    scanf("%d", &size);
    int arr[size];
   
    for(i=0; i<size; i++)
    {
       scanf("%d", &arr[i]);
    }
    for(i=size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
   
   
 
    return 0;
}
