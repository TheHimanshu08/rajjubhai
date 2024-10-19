#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();
    int a, b, c, largest, smallest;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    // Finding largest number
    if (a > b) {
        if (a > c) {
            largest = a;
        } else {
            largest = c;
        }
    } else {
        if (b > c) {
            largest = b;
        } else {
            largest = c;
        }
    }

    // Finding smallest number
    if (a < b) {
        if (a < c) {
            smallest = a;
        } else {
            smallest = c;
        }
    } else {
        if (b < c) {
            smallest = b;
        } else {
            smallest = c;
        }
    }

    printf("Largest = %d, Smallest = %d\n", largest, smallest);

    // Checking if largest is even or odd
    if (largest % 2 == 0)
        printf("Largest is even\n");
    else
        printf("Largest is odd\n");

    // Checking if smallest is even or odd
    if (smallest % 2 == 0)
        printf("Smallest is even\n");
    else
        printf("Smallest is odd\n");

    // getch();
}
