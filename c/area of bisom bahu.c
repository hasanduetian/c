#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    printf("enter three number=");
    scanf ("%lf%lf%lf",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area is =%.2lf\n\n",area);
    return 0;
}
