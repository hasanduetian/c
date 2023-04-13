#include<stdio.h>
struct student{
 int id;
 char s;
 char name[20]; // that is string
 float cgpa;
};
int main(){
  struct student s1={01,'h',"hasan",3.87};
  printf("%d %c %s %f\n\n",s1.id, s1.s, s1.name, s1.cgpa);
  
  struct student s2={02,'g',"mywife",3.90};
  printf("%d %c %s %f\n\n",s2.id, s2.s, s2.name, s2.cgpa);
  struct student s3;
  s3=s2; // structure variable assign
  printf("%d %c %s %f\n\n",s3.id, s3.s, s3.name, s3.cgpa);
  
  if (s2.id==s3.id && s2.cgpa==s3.cgpa)
    printf("s2 and s3 are equal");
  else
    printf("they are not equal");
  



}
