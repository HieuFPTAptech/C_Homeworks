#include <stdio.h>
 
int main() {
   int n,i,j;
 
   printf("NHAP GIA TRI n: ");
   scanf("%d", &n);

   for(i = 0; i < n; i++) {
      for(j = 0; j < i; j++)
        printf("  "); 
 
      for(j = i; j < n; j++)
        printf(" *");
        printf("\n");       
   }    
}