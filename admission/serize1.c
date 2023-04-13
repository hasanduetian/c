
#include<stdio.h>
int main(){
int s,i,n;
float sum=0.000;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i=i+2){
sum=sum+(float)4/i*s;
 s=-s;
}
printf("the sum is %f\n",sum);
}
