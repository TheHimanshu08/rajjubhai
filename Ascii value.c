#include<stdio.h>
#include<conio.h>

void main() {
   char a;
   int i;
   printf("enter character \n");
   scanf("%c",&a);
   for (i=1;i<=200;i++){
     if (a==i){
       printf("ascii value of %c is %d",a,i);
     }
   }
   getch();
}