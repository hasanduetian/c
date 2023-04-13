#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int n,i,mul=1;
    printf("Enter value of N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        mul=mul*pow(3,i);
    }
    printf("%d",mul);

    return 0;
}
