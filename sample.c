#include <stdio.h>

int main(void)
{
  int n1, n2, n3, n4;

  puts("整数を入力せよ");
  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);
  printf("整数３："); scanf("%d",&n3);
  printf("整数４："); scanf("%d",&n4);


  int max = n1;
  if (n2 > max) max = n2;
  if (n3 > max) max = n3;
  if (n4 > max) max = n4;

   printf("最大値は%dです。\n", max);
  
  return 0;
}
