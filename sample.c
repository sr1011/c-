#include <stdio.h>

int main(void)
{
  int a, b;

  puts("二つの整数を入力せよ：");
  printf("整数a："); scanf("%d",&a);
  printf("整数b："); scanf("%d",&b);

  printf("aの値はbの値の%f%%です。\n", (double) a*100 / b);

  return 0;
}
