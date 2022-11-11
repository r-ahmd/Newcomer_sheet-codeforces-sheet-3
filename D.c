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
   for(i=0; i<size; i++)
   {
       if(arr[i]<=10)
        {
            printf("A[%d] = %d\n", i, arr[i]);
        }
   }
   
 
    return 0;
}
