/* Program to find the area of a circle */

#include <stdio.h>

#define PI 3.14

float area;                 // Global variable

float calculateArea(float radius); // Function declaration

int main()
{
    float radius = 5;       // Local variable

    area = calculateArea(radius);

    printf("Area of circle = %.2f", area);

    return 0;
}

float calculateArea(float radius)
{
    return PI * radius * radius;
}
