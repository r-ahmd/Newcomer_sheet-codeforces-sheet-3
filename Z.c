#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;
int main()
{
     int size, range;
    scanf("%d%d", &size, &range);
     int arr[size];
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);
    sort(arr,arr+size);
    while(range--)
    {
        int start;
        scanf("%d", &start);
        
        int l=0, r = size-1;
        int flag=0;
        while(l <= r)
        {
            int m = (l+r)/2;
    
            if(arr[m] == start)
            {
                flag++;
                break;
            }
            else if(arr[m]>start)
                r = m-1;
            else if (arr[m]<start)
                l = m+1;
        }
        if(flag == 1)
        {
            printf("found\n");
        }
        else
        {
            printf("not found\n");
        }
    }
 
    return 0;
}
