#include<stdio.h>
#include<conio.h>

void main() {
 int n,i,f=1;
 printf("enter no. \n");
 scanf("%d",&n);
 for (i=1;i<=n;i++){
   f=i*f;
   
 }
 printf("factorial of %d is %d",f);
 getch();
}