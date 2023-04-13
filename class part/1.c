// summation of serize 
#include<stdint.h>
int main(){
    int i,n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=-3; i<=n; i++){
        if (i==-2) continue;
        if(i==-3){
            sum=sum+pow(i,3);
        }
        else 
        sum=sum+pow(i,2);
    }
    printf("The summation of the serize: %d", sum);

}