#include<stdio.h>
int main(){
float inchi;
int feet, meter;

printf("enter the meter number:");
scanf("%d",&meter);
feet=(meter*3.2808);
printf("the feet is :%d\n",feet);
inchi= meter*39.37;
printf("the inchi is  :%f\n",inchi);

}
/*#include <stdio.h>

int main(void) {
  // Constant to convert meters to feet
  const float METERS_TO_FEET = 3.2808;
  // Constant to convert meters to inches
  const float METERS_TO_INCHES = 39.37;

  // Read the height in meters from the user
  printf("Enter a height in meters: ");
  float height_in_meters;
  scanf("%f", &height_in_meters);

  // Convert the height to feet and inches
  int feet = (int)(height_in_meters * METERS_TO_FEET);
  float inches = (height_in_meters * METERS_TO_INCHES) - (feet * 12);

  // Print the result
  printf("%.2fm is equal to %d feet and %.2f inches\n", height_in_meters, feet, inches);

  return 0;
}*/



