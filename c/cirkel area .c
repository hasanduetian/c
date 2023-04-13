#include<stdio.h>
//#include<math.h>
int main()
{
    float radius ,area;
    printf("the radius is =");
    scanf("%f",&radius);

    area=3.1416*radius*radius;
    //area=M_PI*radius*radius;

    printf("the circle area is =%f",area);
    return 0;
}
