#include<stdio.h>
int main(){
 int row,col,n,k;
 printf("enter the number:");
 scanf( "%d",&n);
 for( row=1; row<=n; row++){
    for( col=row; col<n; col++)
    printf(" ");
    for (k=1;k<=row;k++)
        printf("*");

     printf("\n");
 }

}
