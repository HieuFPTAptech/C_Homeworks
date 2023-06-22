#include <stdio.h>

int main(int argc, char const *argv[])
{
  
   int n,i,j;
 
   printf("NHAP GIA TRI n: ");
   scanf("%d", &n);

   for(i = 0; i < n; i++) {
      for(j = 0; j < i; j++)
        printf("  "); 
 
      for(j = i + 1; j < n; j++)
        printf(" %d", j);
        printf("\n");       
   }    
  return 0;
}
