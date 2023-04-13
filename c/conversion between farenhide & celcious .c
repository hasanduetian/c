//celcious to farenhide
#include<stdio.h>
int main()
{
    float c ,f;
    printf("The centigrade temperature is =");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("the farenhide temperature is =%.2f",f);
    getch();

}


//farenhide to celcious
#include<stdio.h>
int main()
{
    float c ,f;
    printf("The farenhide temperature is =");
    scanf("%f",&c);
    c=(f-32)/1.8;
    printf("the celcious temperature is =%.2f",c);
    getch();

}


