#include <stdio.h>
#include <math.h>

int main () {
  double a, b ,c;
  char chon;

  do
  {

    printf("NHAP VAO SO a: \n");
    scanf("%lf", &a);

    printf("NHAP VAO SO b: \n");
    scanf("%lf", &b);

    printf("NHAP VAO SO c: \n");
    scanf("%lf", &c);

    if (a == 0) {
      printf("PHUONG TRINH CO MOT NGHIEM: %lf\n", -(c/b));
    }

    if (a != 0) {
      double delta = (b * b) - (4 * a * c);

      if (delta == 0) 
      {
        printf("PHUONG TRINH CO MOT NGHIEM: %lf\n", (- b / 2 * a));
      }

      else if (delta > 0)
      {
        printf("PHUONG TRINH CO 2 NGHIEM: %lf || %lf \n", (- b - sqrt(delta)) / 2 * a, (- b + sqrt(delta)) / 2 * a);
      }
      
      else {
        printf("PHUONG TRINH VO NGHIEM\n");
      }
    }

    printf("BAN CO MUON TIEP TUC: (Y/N)");
    scanf(" %c", &chon);
  } while (chon == 'Y' || chon == 'y');

  return 0;
}