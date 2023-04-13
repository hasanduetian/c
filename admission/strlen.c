#include<stdio.h>
int main(){
char str[50];
int i;
gets(str);
for(i=0;str[i]!='\0';i++);
printf("the length of string=%d",i);

}
