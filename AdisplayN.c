#include<stdio.h>
#include<conio.h>

void main() {
    int i,n,s;
    printf("enter no. \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
      s = i*(1+i)/2;
      printf("n=%d  s=%d\n",i,s);
    }
    getch();
}