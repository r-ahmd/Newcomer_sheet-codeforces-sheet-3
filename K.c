#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    char arr[n];
    int sum=0;
    for(int i=0; i<10;i++)
    {
        scanf("%s", &arr[i]);
    }
 
    for(int i=0; i<n;i++)
    {
        sum=sum+(arr[i]-'0');
    }
    printf("%d\n", sum);
 
    return 0;
}
