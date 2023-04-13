#include<stdio.h>`
int swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int operation(int* e,int* p){
    *e=*e+*p;
    *p =*e-*p;
}

int main(){
int a=20,b=30;
printf("the number before swapping:%d,%d\n ",a,b);
swap(&a,&b);
printf("the swaping number is :%d,%d\n",a,b);

int c,d;
printf("enter two numbers:");
scanf("%d%d",&c,&d);
operation(&c,&d);
printf("the number of summation and substruction:%d %d",c,d);



    return 0;
}
