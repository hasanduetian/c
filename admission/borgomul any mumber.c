#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("Enter a munber:");
    scanf("%f",&a);
    if(a>=0){
        b=sqrt(a);
        printf("The root is:%f",b);
    }
    else{printf("This is umvalid number:");}
    return 0;
}
