#include <stdio.h>
#include <conio.h>
void main() {
  int n,i,c=0 ;
  printf("enter no.\n");
  scanf("%d",&n);
  for (i=2;i<n;i++){
    if (n%i==0){
      c=c+1;
    }
  }
   if (c==0){
     printf("%d is prime no.");
   }
   else {
     printf("%d is not a prime no. ");
   }
   getch();
}
