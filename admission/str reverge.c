#include<stdio.h>
int main(){
char str[100],rev[100];
int i,j,l;
gets(str);
for(i=0;str[i]!='\0';i++);
    l=i-1;
for(j=0;j<i;j++)
{
    rev[j]=str[l];
    l--;
}
rev[j]='\0';
printf("%s",rev);

}



