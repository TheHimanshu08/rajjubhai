#include<stdio.h>
#include<math.h>
#include<conio.h>

void main() {
    int b,a,n,j,x,i,c=0,y=0;
    printf("enter no.\n")
    scanf("%d",&n);
    x=n;
    for(i=1;i<=100;i++){
      
      if (n!=0){
      n=n/2;
      c=c+1;
    } 
    } 
    for (j=0;j<c;j++){
    a = x%2;
    b=pow(10,j);
    b=a*b;
    y= y+b ;
    x=x/2;

} 
printf("%d",y);
gettch();  
}