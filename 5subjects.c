#include<stdio.h>
// #include<conio.h>

void main() {
    // clrscr();
    int roll_no, marks1, marks2, marks3, marks4, marks5, total;
    float percentage;
    char grade;

    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);

    printf("Enter marks of 5 subjects:\n");

    printf("Subject 1: ");
    scanf("%d", &marks1);
    printf("Subject 2: ");
    scanf("%d", &marks2);
    printf("Subject 3: ");
    scanf("%d", &marks3);
    printf("Subject 4: ");
    scanf("%d", &marks4);
    printf("Subject 5: ");
    scanf("%d", &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A+';
    else if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B+';
    else if (percentage >= 60)
        grade = 'B';
    else if (percentage >= 50)
        grade = 'C';
    else
        grade = 'F';

    printf("\nRoll Number: %d\n", roll_no);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %c\n", grade);

    // getch();
}
