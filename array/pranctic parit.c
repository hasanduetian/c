#include<stdio.h>

int  fun1(int n){
    if(n<1) return 1;
    else return (n*fun2(n-1));
}

int  fun2(int n){
    if(n<1) return 1;
    else return (n*fun1(n-1));
}
int main(){
printf("the value of the fun 1",fun1(10));

    return 0;
}