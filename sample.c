#include <stdio.h>

int main(void)
{
  int a, b, c;

  puts("三つの整数を入力せよ：");
  printf("整数a："); scanf("%d",&a);
  printf("整数b："); scanf("%d",&b);
  printf("整数c："); scanf("%d",&c);

  int sum = a + b + c;
  double ave = (double)sum / 3;

  printf("それらの合計は%5dです、\n", sum);
  printf("それらの平均は%5.1fです、\n", ave);

  return 0;
}
