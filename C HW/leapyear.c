#include <stdio.h>

int main () {
  int year;

  printf("NHAP NAM CAN KIEM TRA: \n");
  scanf("%d", &year);
  
  char choice;
  
  do
  {
    if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0) {
      printf("NAM %d LA NAM NHUAN\n", year);
    }
    else {
      printf("NAM KO PHAI NAM NHUAN\n");
    } 

    printf ("NHAP LAI NAM CAN KIEM TRA (Y/N)\n");
    scanf("%c",&choice);
  } while (choice == 'y' || choice == 'Y');
}