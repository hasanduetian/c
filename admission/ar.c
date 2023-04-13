#include<stdio.h>
#include<math.h>
int mian()
{
 int n,i,s,sum=0,d,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        n/10;
        s++;
    }
    n=temp;
    while(n!=0);
    {
        d=n%10;
        sum=sum+pow(d,s);
    }
    if(sum==temp)
    {
        printf("this is a armstromg mumber");
    }
    else
        printf("not armastrong");
    return 0;
}
