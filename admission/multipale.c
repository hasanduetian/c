#include<stdio.h>
int main()
{
    float n,i,mul=1;
    Printf("Enter a value of N:");
    scanf("%d",&n);
    for(i=3;i<=n;i*=3)
    {
        mul=mul*i;
    }
    printf("%d",mul);
    return 0;
}
