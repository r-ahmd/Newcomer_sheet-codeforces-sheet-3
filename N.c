#include <stdio.h>
 
int main()
{
   int a,b,c=0;
   int i;
   scanf("%d%d", &a, &b);
 
   int s = a+b+1;
   char arr[s];
   for(i=0; i<s; i++)
   {
      scanf("%s", &arr[i]);
   }
 
    //checking all code digit is valid or not
    for(i=0; i<s; i++){
        if(i==a)
            continue;
        if(arr[i]>=48 && arr[i]<=75)
            c++;
    }
 
    //check the code is valid or not according to the rules
    if(arr[a]==45 && c==(s-1)){
        printf("Yes");
    }else{
        printf("No");
    }
 
    return 0;
}
