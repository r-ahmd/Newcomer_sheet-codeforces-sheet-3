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
    int min = arr[0];
    int count = 0;
    for(i=0; i<size; i++)
    {
        if(min == arr[i])
            count++;
        if(min > arr[i])
        {
            min = arr[i];
            count = 1;
        }
    }
    if(count%2 == 0)
        printf("Unlucky\n");
    else
        printf("Lucky\n");
    
    return 0;
}
