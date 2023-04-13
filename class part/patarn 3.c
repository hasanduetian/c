#include<stdio.h>
int main(){
int i,j,k,n;
scanf("%d",&n);
for (i=1;i<=n;i++){
    for (j=i;j<n;j++){
        printf("#");

    }
    for (k=1;k<=(2*i)-1;k++){
        for (int h=1;h<=k-1;h++)
            printf("#");
        printf("*");
        }

        for (j=i;j<n;j++){
        printf("#");}

    printf("\n");
 }
}
