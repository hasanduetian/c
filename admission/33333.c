
#include<stdio.h>
#include<math.h>
int main(){
int n,i,x,sign=-1;
float sum=1,fact=1;
printf("enter the value");
scanf("%d%d",n,x);
//printf("
for(i=2;i<=2*(n-1);i+=2)
{
    fact=fact*i*(i-1);
    sum=sum+sign*(pow(x,i)/fact);
    sign*=-1;

}
//");
printf("%f",sum);

}
