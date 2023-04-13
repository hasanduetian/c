#include<stdio.h>
int main(){
char str1[20],str2[30];

printf("enter the str1:");
gets(str1);
printf("enter the str2:");
gets(str2);

strcat(str1,str2);
strcat(str1,str2);
printf("str1=%s",str1);

}
