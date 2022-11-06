// The length and breadth of the rectangle and radius of the circle is input through keyboard.
// write a program to calculate the area and perimeter of  rectangle &
// and the area and circumference of circle

// RECTANGLE:
// AREA = l*b
// PERIMETER=2(l+b)

// CIRCLE:
// AREA=⫪r2
// PERIMETER=2⫪r

#include <stdio.h>

int main()
{
    float length, breadth, r_area, r_perimeter, radius, c_area, c_perimeter;

    printf("\n Enter the length & Breadth : ");
    scanf("%f%f", &length, &breadth);

    printf("\nEnter Radius of circle : ");
    scanf("%f", &radius);
    // Rectangle
    r_area = length * breadth;
    r_perimeter = 2 * (length + breadth);
    // Circle
    c_area = 3.14 * radius * radius;
    c_perimeter = 2 * 3.14 * radius;

    printf("\nArea of rectangle : %0.2f", r_area);
    printf("\nPerimeter of rectangle : %0.2f", r_perimeter);

    printf("\nArea of Circle : %0.2f", c_area);
    printf("\nPerimeter of circle : %0.2f", c_perimeter);

    return 0;
}