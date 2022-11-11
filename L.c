#include <stdio.h>
#include <stdlib.h>
 
int max(int num1, int num2)
{
    if(num1>num2)
        return num1;
    else
        return num2;
}
 
int main()
{
    int count;
    scanf("%d", &count);
    while(count--)
    {
        int size;
        scanf("%d", &size);
        int arr[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d", &arr[i]);
            printf("%d ", arr[i]);
        }
        int i=0, j=0;
        int m;
        while(1)
        {
            if(j==size-1)
                break;
            if(i==j)
            {
                m = max(arr[i], arr[i+1]);
            }
            else
            {
                m = max(m, arr[i+1]);
            }
            printf("%d ", m);
            i++;
            if(i==size-1)
            {
                j++;
                i=j;
            }
        }
        printf("\n");
    }
 
    return 0;
}
