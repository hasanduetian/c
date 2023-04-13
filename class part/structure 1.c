// structure : structure is a collection of variable of different datatype under a single name
// it is a user define datatype

#include<stdio.h>
struct student{
 int id;
 char s;
 char name[20]; // that is string
 float cgpa;
};
int main(){
  /*struct student s1;//={01,"hasan",3.87};
  s1.id=10;
  s1.s='h';
  strcpy(s1.name,"hasan");// string er jonno eivabe value asssign korle strcpy na dile error dakabe =array type
  s1.cgpa=3.55;
  struct student s2,s3;*/
  struct student s1={01,'h',"hasan",3.87};
  printf("%d %c %s %f\n\n",s1.id, s1.s, s1.name, s1.cgpa);
  
  struct student s2={02,'g',"my dream girls",3.90};
  printf("%d %c %s %f\n\n",s2.id, s2.s, s2.name, s2.cgpa);
  struct student s3;
  s3=s2; // structure variable assign
  printf("%d %c %s %f\n\n",s3.id, s3.s, s3.name, s3.cgpa);
  //printf("%d%s%f",s1.id, s1.name, s1.cgpa);
 /* printf("%d ",s1.id);
  printf("%c ",s1.s);
  printf("%s ",s1.name);
  printf("%f \n\n",s1.cgpa); */
  
  //printf("%d%s%f",s1.id, s1.name, s1.cgpa);
 /* printf("%d ",s2.id);
   printf("%c ",s2.s);
  printf("%s ",s2.name);
  printf("%f \n\n",s2.cgpa); */
  
  //printf("%d%s%f",s1.id, s1.name, s1.cgpa);
  /*printf("%d ",s3.id);
  printf("%s ",s3.name);
  printf("%f \n\n",s3.cgpa);*/



}
