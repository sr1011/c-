#include <stdio.h>

int main(void)
{
  int n1, n2;

  printf("整数を入力せよ：\n");
  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);

  if (n1 == n2)
    puts("AとBは等しいです。");
  else if (n1 > n2)
    puts("AはBより大きいです。");
  else
  puts("AはBより小さいです。");
  
  return 0;
}
