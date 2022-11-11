#include <stdio.h>
 
int main()
{
    int size,i;
   scanf("%d", &size);
   int arr[size];
   
   for(i=1; i<=size; i++)
   {
      scanf("%d", &arr[i]);
   }
   
   int lowest = arr[1];
   int count=1;
   
   for(i=1; i<=size; i++)
   {
       if(lowest>arr[i])
       {
           lowest = arr[i];
           count=i;
       }
       
   }
   printf("%d %d\n", lowest, count);
   
 
    return 0;
}
