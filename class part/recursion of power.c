// write a program power function of recursion
#include<stdio.h>
int power(int x,int y){
if (y==0)
    return 1;
else{
    return(x*power(x,(y-1)));
    }
}

int main(){
int x,y;
printf("enter x and y number:\n");
scanf("%d%d",&x,&y);
printf("the power is =%d\n",power(x,y));
}
