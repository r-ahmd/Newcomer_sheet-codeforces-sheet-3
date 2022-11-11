#include <stdio.h>
 
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int flag=0;
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int search;
    scanf("%d", &search);
    for(int i=0; i<size; i++)
    {
        if(arr[i] == search)
        {
            printf("%d\n", i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("-1\n");
    }
    
    
 
    return 0;
}
