// triangle
#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3;
    float s, area;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // check if the given sides form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // calculate semi-perimeter of the triangle
        s = (side1 + side2 + side3) / 2;

        // calculate area using Heron's formula
        area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

        printf("The triangle is valid.\n");
        printf("Area of the triangle = %f", area);
    } else {
        printf("The triangle is not valid.");
    }

    return 0;
}
