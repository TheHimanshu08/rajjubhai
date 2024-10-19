#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even", num);
    else
        printf("%d is odd", num);

    // getch();
}
