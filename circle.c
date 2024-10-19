#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f", circumference);
    // getch();
}
