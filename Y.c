#include <stdio.h>
 
int main()
{
    long long int size, range;
    scanf("%lld%lld", &size, &range);
    long long int arr[size], brr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%lld", &arr[i]);
        if(i==0)
            brr[i] = arr[i];
        else
            brr[i]= arr[i] + brr[i-1];
    }
    while(range--)
    {
        long long int start, end;
        scanf("%lld%lld", &start, &end);
        start--, end--;
        long long int sum = brr[end] - brr[start] + arr[start];
        printf("%lld\n", sum);
    }
 
 
    return 0;
}
