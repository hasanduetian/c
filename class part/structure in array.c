#include<stdio.h>
typedef struct student{   //type def use kore amra jekono keyword er nam proborton korte pari
  int id ;
  char name [20];
  float cgpa;

};// structure er shese semeclone er age sai nam ta dite hobe


int main(){
  struct student s[3];
  // for input
  for (int i=0;i<3;i++){
    printf("enter the information of person %d\n",i+1);
    printf("enter id,name,cgpa:\n");
    scanf("%d %s %f",&s[i].id, &s[i].name, &s[i].cgpa);
  }
    //for output
  for (int i=0;i<3;i++){
    printf("The information of person %d \n id,name,cgpa are ",i+1);
    printf("%d  %s  %f\n",s[i].id, s[i].name, s[i].cgpa);
  }

}
