#include <stdio.h>

int main(void)
{
  int n1, n2, n3, n4;

  puts("整数を入力せよ");
  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);

  int max = n1 > n2 ? n1 : n2;
   printf("最大値は%dです。\n", max);
  
  return 0;
}
