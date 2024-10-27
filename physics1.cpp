#include<stdio.h>
#include<conio.h>

void main() {
    
    float u, a, t, v, s;
    clrscr();
    printf("Enter u, a ,t  ");
    scanf("%f%f%f", &u, &a, &t);
    v = u + a * t;
    s = u * t + 0.5 * a * t * t;
    printf("v = %f", v);
    printf("s = %f", s);
    getch();
}
