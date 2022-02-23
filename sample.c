#include <stdio.h>

int main(void)
{
  double x, y;

  puts("整数を入力せよ：");
  printf("整数x："); scanf("%lf",&x);
  printf("整数y："); scanf("%lf",&y);

  printf("x + y = %f\n", x + y);
  printf("x - y = %f\n", x - y);
  printf("x * y = %f\n", x * y);
  printf("x / y = %f\n", x / y);
  
  return 0;
}
