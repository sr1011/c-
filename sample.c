#include <stdio.h>

int main(void)
{
  double x, y;

  puts("整数を入力せよ：");
  printf("整数x："); scanf("%lf",&x);

  printf("あなたは%fと入力しましたね。\n", x);

  return 0;
}
