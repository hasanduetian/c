#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any upper case letter:");
    scanf("%c",&upper);
    lower= tolower(upper);
    printf("the lower case letter is :%c",lower);
    return 0;

}

