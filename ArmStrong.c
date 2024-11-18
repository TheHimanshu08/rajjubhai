#include<stdio.h>
#include<math.h>
#include<conio.h>

void main() {
    int a,n,j,x,b,i,y=0,p=0;
    printf("enter no.\n");
    scanf("%d",&n);
    x=n;
    b=x;
    for(i=1;i<=100;i++){
      if (n!=0){
        n=n/10;
        p= p +1;
      }
    }
    for (j=0;j<p;j++){
        a = x%10;
        x = x/10;
        a = pow(a,p);
        y = y+a;
    }
if (y==b){
  printf("%d is arm strong no.",b);
}
else {
  printf("%d is not arm strong no.",b);
}
gech();
}
