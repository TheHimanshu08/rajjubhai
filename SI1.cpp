#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();
    float principal, rate, time, interest;
    printf("Enter principal, rate, and time: ");
    scanf("%f%f%f", &principal, &rate, &time);
    interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f", interest);
    // getch();
}
