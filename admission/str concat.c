#include<stdio.h>
int main(){
char str1[50],str2[50];
int i,j;
gets(str1);
gets(str2);
for(i=0;str1[i]!='\0';i++);
for(j=0;str2[j]!='\0';j++)
{
    str1[i]=str2[j];
i++;
}
str1[i]='\0';
puts(str1);

}
