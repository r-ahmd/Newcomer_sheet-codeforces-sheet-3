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
    int max = arr[0];
    int min = arr[0];
    int maxindex = 0;
    int minindex = 0;
    for(i=0; i<size; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            maxindex = i;
        }
        if(min>arr[i])
        {
            min = arr[i];
            minindex = i;
        }
    }
    arr[minindex] = max;
    arr[maxindex] = min;
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}
