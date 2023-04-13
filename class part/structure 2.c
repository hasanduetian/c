#include<stdio.h>
typedef struct student{
  int id ;
  float cgpa;
  char name [20];

}std;


int main(){
  std s[3];
  for (int i=0;i<3;i++){
    printf("enter id,name,cgpa:");
    scanf("%d%s%f",&s[i].id,s[i].name,s[i].cgpa);
  }

}
