
// non return type
#include<stdio.h>
void display(int n){
if (n<1)
    return n;
else{
    printf(" %d",n);
    display(n-1);
    printf(" %d",n);
}

}
int main(){
int n;
scanf("%d",&n);
display(n);
}
