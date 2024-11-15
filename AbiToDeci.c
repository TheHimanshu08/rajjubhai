#include<stdio.h>
#include<math.h>
#include<conio.h>
void main() {
    int b,a,n,j,x,i,c=0,y=0;
    printf("enter binary no.\n");
    scanf("%d",&n);
    x=n;
    for(i=1;i<=100;i++){
      
      if (n!=0){
      n=n/10;
      c=c+1;
    } 
    } 

    for (j=0;j<c;j++){
    
    a = x%10;
    x = x/10;
    b = pow(2,j);
    a = a*b;
    y = y +a;
    
    }
   printf("\n%d",y);
   getch();
}