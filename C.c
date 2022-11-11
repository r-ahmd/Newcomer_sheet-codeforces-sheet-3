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
       if(arr[i]>0)
       {
           printf("1 ");
       }
       if(arr[i]<0)
       {
           printf("2 ");
       }
       else if(arr[i]==0)
       {
           printf("0 ");
       }
   }
       
 
    return 0;
}
