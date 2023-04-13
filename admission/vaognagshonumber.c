#include<stdio.h>
int main()
{
    float a,b,sum=0.0;
    printf("Enter value of a:");
    scanf("%f",&a);
    for(b=2;b<=a;b++)
    {
        sum=sum+1.0/b;
    }
    printf("The sum is:%f",sum);
    return 0;

}
