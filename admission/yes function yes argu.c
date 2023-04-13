#include<stdio.h>
float circle(int x);    //function call
int main(){

int r;
float A;
scanf("%d",&r);
A=circle(r);      //give input user define function
printf("%f",A);
return ;
}
float circle(int x)   //user define function
{
    float A;
    A=3.1416*x*x;
    return A;       //return a
}
