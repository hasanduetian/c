#include<stdio.h>
int main(){
int i,j,k,n,h;
//scanf("%d",&n);
for (i=1;i<=5;i++){
    for (j=i;j<5;j++){
        printf(" ");

    }
    int n1=6-i;
    int n2=4;

    for (k=1;k<=i;k++){
        printf("%d",n1);
         n1++;
        }
        if (i>1){
            for (int p=1;p<i;p++){
                printf("%d",n2);
                --n2;}
            }
            printf("\n");
        }

 }





