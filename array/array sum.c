#include<stdio.h>
int main(){
int row,col,i,j,sum=0;
printf("Enter the row:");
scanf("%d",&row);

printf("Enter the collumn:");
scanf("%d",&col);
int a[row][col];

printf("Enter the 2D Array:\n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&a[i][j]);
        sum+=a[i][j];
    }
}
printf("The summation is= %d",sum);
}
