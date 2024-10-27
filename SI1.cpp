#include<stdio.h>
#include<conio.h>

void main() {
    
    float p, r, t, i;
    clrscr();
    printf("Enter principal, rate, and time: ");
    scanf("%f%f%f", &p, &r, &t);
    i = (p * r * t) / 100;
    printf("Simple Interest = %f", i);
    getch();
}
