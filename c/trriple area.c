#include<stdio.h>
int main()

{

    double Area, height,base;


    printf("the base is=");
    scanf("%lf",&base);

    printf("the height is=");
    scanf("%lf",&height);


    Area=(float)1/2*base*height;
    printf("the area is=%lf",Area);
    getch();
}
