#include <stdio.h>
void main(){
int n,i,j;
char a='*';

printf("enter no.\n");
scanf("%d",&n);
for (i=1; i<=n; i++)
   {
   for (j=1; j<=n; j++)
     { if (i>=j){
         printf("%c", a);
         }
        
     }
    printf("\n");
     
   }

}