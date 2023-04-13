#include<stdio.h>
int main(){
int a,b;
printf("enter the number:\n");
scanf("%d%d",&a,&b);
 if(a>0&&b>0)
    printf("1st cordent");
 else if(a<0&&b>0)
    printf("2nd cordetnt");
 else if(a<0&&b<0)
    printf("3rd cordent");
 else if(a>0&&b<0)
    printf("4th cordetnt");

}

