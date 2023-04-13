#include <stdio.h>
float area(int r);
int sum(int x,int y);
void mul();
float div();

int main(){
    //function of yes return yes argument
int r,x,y,b;
float a;

printf("enter the area:\n");
scanf("%d",&r);
a=area(r);
printf("The area is :%f\n\n",a);

    //NO return yes argument
printf("enter the two sum digit:\n");
scanf("%d%d",&x,&y);
sum(x,y);

//No return no argument
mul();

//yes return no argument
printf("The division is :%f\n",div());

return 0;
}


//function of yes return yes argument function
float area(int r ){
  float a;
  a= 3.1416*r*r;
  return a;

}
//NO return yes argument function
int sum(int x,int y){
    int s;
    s=x+y;
    printf("the sum is:%d\n",s);
    //return (x+y);
}
//No return no argument function
void mul(){
    int a,b,multi;
    printf("Enter the two multiplication digit:\n");
    scanf("%d%d",&a,&b);
    multi=a*b;
    printf("multiplication is %d:\n",multi);

}
// yes return no argument function
float div(){
    int a,b;
    float divi;
    printf("Enter the two division digit:\n");
    scanf("%d%d",&a,&b);
    divi=a/b;
    return divi;
}

