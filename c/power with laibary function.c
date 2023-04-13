#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter x and y value:");
  scanf("%d%d",&x,&y);
  double result=pow(x,y);
  printf("result:%lf",result);
  return 0;

}
