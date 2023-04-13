#include <stdio.h>
int main()
{
    char lower;
    printf("Enter any lower case letter:");
    scanf("%c",&lower);

    printf("The upper case latter is :%c",lower-32);
    return 0;
}
