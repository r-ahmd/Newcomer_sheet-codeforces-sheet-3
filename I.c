#include <stdio.h>
 
int main()
{
    int t,result=0;
    int flag=1, min;
    scanf("%d", &t);
    while(t--)
    {
        int size;
        scanf("%d", &size);
        int arr[size];
        
        for(int i=0; i<size; i++)
            scanf("%d", &arr[i]);
            
        for(int j=1; j<=size; j++)
        {
            for(int k=j+1; k<=size; k++)
            {
                result = arr[j-1] + arr[k-1] + (k-j);
                
                if(flag==0 && min>result)
                    min = result;
                    
                if(flag)
                {
                    min = result;
                    flag=0;
                }
                result = 0;
            }
        }
        flag=1;
        printf("%d\n", min);
    }
    
 
    return 0;
}
