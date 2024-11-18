#include <stdio.h>
#include<conio.h>
void main(){
  int a,b,l,s,q,x,r;
  printf("enter a,b\n");
  scanf("%d%d",&a,&b);
  
  if (a>b){
    l=a;
    s=b;
  }
  else {
    l=b;
    s=a;}
  
  while (r!=0){
   q=l/s;
   r=l%s;
   l=s;
   s=r;
   if(r>0){
     x=r;}
 }
 printf("%d  ",x);
 getch();
}
