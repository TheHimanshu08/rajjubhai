#include <stdio.h>
#include <conio.h>

long long int fct(int n) {
    if (n > 0)
        return (n * fct(n - 1));
    else
        return (1);
}

void main() {
    int n;
    long long int c;
    printf("Enter any number:\n");
    scanf("%d", &n);
    c = fct(n);
    printf("Factorial = %lld", c);
    getch();
}
