#include<stdio.h>
void hasan(int a){
if (a<1)
    return;
else  {
    printf("%d",a);
    return hasan(a/2);
    }
}
void main(){
hasan(10);
}
