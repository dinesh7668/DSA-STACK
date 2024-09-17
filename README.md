# dinesh-demo
// This is my first repository.
// <br>
// author - Dinesh
#include <stdio.h>
int main()
{
  int cd, cm, cy, yd, ym, yy, rd, rm, ry;
  printf("Enter current date in the formate of dd mm yy : ");
  scanf("%D%d%d", &cd, &cm, &cy);
  printf("Enter your date of birth in the formate of dd mm yy : ");
  scanf("%D%d%d", &yd, &ym, &yy);
  rd = cd - yd;
  rm = cm - ym;
  ry = cy - yy;
  if (rd > 30)
  {
    rd = rd - 30;
    rm++;
  }

  if (rm > 12)
  {
    rm = rm - 12;
    ry++;
  }
  printf("\nYour real age is %d years, %d months and %d days.", ry, rm, rd);

  return 0;
}
