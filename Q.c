#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);
    while(count--)
    {
        int size, result=0;
        scanf("%d", &size);
        int arr[size];
        for(int i=0; i<size; i++)
        {
           scanf("%d", &arr[i]);
        }
        result = size;
        int i=0, j=0;
        while(1)
        {
            if(j==size-1)
               break;
            if(arr[i]>arr[i+1])
            {
               j++;
               i=j;
               continue;
            }
          
            result++;
            i++;
          
            if(i==size-1)
            {
               j++;
               i=j;
            }
        }
        printf("%d\n", result);
    }

    return 0;
}
