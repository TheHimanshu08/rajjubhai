#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    largest = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("The largest number is %d", largest);
    // getch();
}
