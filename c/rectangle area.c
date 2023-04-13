#include<stdio.h>
int main()
{
 double length,width,area;
 printf("the length and width is =");
 scanf("%lf%lf",&length,&width);

 area=length*width;
 printf("The area of rectangle is =%.2lf",area);
 getch();

}
