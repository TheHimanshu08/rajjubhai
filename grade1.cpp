#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks < 50)
        printf("Grade: F");
    else if (marks < 60)
        printf("Grade: C");
    else if (marks < 70)
        printf("Grade: B");
    else if (marks < 80)
        printf("Grade: B+");
    else if (marks < 90)
        printf("Grade: A");
    else
        printf("Grade: A+");
    // getch();
}
