#include<stdio.h>
int main()
{
    int num1=20,num2=10;

    num1=num1-num2;//20-10=10
    num2=num1+num2;//10+10=20
    num1=num2-num1;//20-10=10

    printf("num1=%d\n",num1);
    printf("num2=%d",num2);
    getch();
}
