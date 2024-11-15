#include <stdio.h>
#include <math.h>
#include <conio.h>
void main() {
    int a, b, c, d, x, y, i;
    printf("Enter a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b + (-4) * a * c;
    if (d < 0) {
        d = d * (-1);
        x = -b / (2 * a);
        y = sqrt(d) / (2 * a);

        printf("Imaginary roots\n");
        printf("Roots: %d + %di, %d - %di\n", x, y, x, y);
    }
    else {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        if (x == y) {
            printf("Equal roots\n");
        } else {
            printf("Different roots\n");
        }
        printf("Real Roots\n");
        printf("Roots are %d, %d\n", x, y);
        
    }
    getch();
}
