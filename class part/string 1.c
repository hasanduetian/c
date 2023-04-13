#include<stdio.h>
int main(){

char str[100];
printf("enter the the character:\n");
gets(str);

// without libary function

/*for (int i=0;str[i]!='\0';i++)
    printf("%d",i);*/

    //use libary functin
    int len=strlen(str);
    printf("Your length is: %d",len);

}




