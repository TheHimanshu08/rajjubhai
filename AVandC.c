#include <stdio.h>
#include<conio.h>
void main() {
    char a;
    
    printf("Enter a character: ");
    scanf("%c", &a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||) {
        printf("vowel", a);
    } else {
        printf("consonant", a);
    }
    getch();
}
