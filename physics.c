#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();
    float u, a, t, V, S;
    printf("Enter initial velocity (u), acceleration (a), and time (t): ");
    scanf("%f%f%f", &u, &a, &t);
    V = u + a * t;
    S = u * t + 0.5 * a * t * t;
    printf("V = %.2f\n", V);
    printf("S = %.2f", S);
    // getch();
}
