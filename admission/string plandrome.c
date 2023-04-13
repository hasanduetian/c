
#include<stdio.h>
int main(){
char str[100];
int i,j,k;
printf("enter a string:");
gets(str);
for(i=0;str[i]!='\0';i++);
    j=0,k=i-1;
while(j<=k)
{
   if(str[j]!=str[k])
   {
       break;

   }
   j++;
   k--;

}
if(j<=k)
    printf("palindrome number\n");
else
    printf("not palindrome number\n");


}



