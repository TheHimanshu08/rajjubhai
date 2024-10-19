#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();
    int x, y, temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    // With third variable
    temp = x;
    x = y;
    y = temp;
    printf("After swapping (with third variable): x = %d, y = %d\n", x, y);

    // Without third variable
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping (without third variable): x = %d, y = %d", x, y);
    // getch();
}
