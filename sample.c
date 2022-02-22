#include <stdio.h>

int main(void)
{
  int num;

  puts("整数を入力せよ：");
  scanf("%d",&num);

  printf("%dの符号を反転させた値は%dです。\n", +num, -num);

  return 0;
}
