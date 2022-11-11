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
      int index;
      int sort = arr[i];
      int flag=0;
      for(int j=i+1; j<size; j++)
      {
         if(arr[j]<sort)
         {
            index = j;
            sort = arr[j];
            flag=1;
         }
      }
      if(flag==1)
      {
         int temp = arr[i];
         arr[i] = sort;
         arr[index] = temp;
      }
    }
    
    for(i=0; i<size; i++)
    {
      printf("%d ", arr[i]);
    }
    
    return 0;
}
