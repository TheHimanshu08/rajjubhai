#include <stdio.h>
#include<conio.h>

void main() {
    int a=0, n, i, c, b=1;
    printf("Enter no. \n")
    scanf("%d", &n);
    printf("0\n");
    for (i = 0; i <= n-2; i++) {
        c = a + b;
        a = c;
        b = c - b;
        printf("%d\n", c);
    }
    getch();
}
