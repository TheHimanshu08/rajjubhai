#include<stdio.h>
#include<math.h>
#include<conio.h>

void main() {
   int n,i,a,b,c;
   for (i=1;i<=600;i++){
    a=i%10;
    b=(i/10)%10;
    c=i/100;
    a=pow(a,3);
    b=pow(b,3);
    c=pow(c,3);
    if (i==(a+b+c)){
      printf("%d\n",i);
    }
   }
   
gech();
}