// tail function , factorial program of  number with recursion
#include<stdio.h>
// function 1
int fun1(int i){
if (i<=1)
    return 1;
else
    return i*fun2(i-1);
}
// function 2
int fun2(int i){
if (i<=1)
    return 1;
else
    return i*fun1(i-1);
}
// main function
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
printf("The factorial value is = %d\n",fun1(n));

}
