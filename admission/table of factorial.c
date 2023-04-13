
#include<stdio.h>
int main(){

int n,count=1;
long long int fact=1;
printf("enter any number:");
scanf("%d",&n);
calfun:
    fact=count*fact;
    ++count;
    printf("\t%lld\n",fact);
    if (count<=n)
    goto calfun;


}

