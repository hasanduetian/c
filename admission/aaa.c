#include<stdio.h>
#include<math.h>
#include<conio.h>
int mian()
{
 int n,i,s,sum=0,d;
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        n=n/10;
        s++;
    }
    while(n!=0);
    {
        d=n%10;
        n=n/10;
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
