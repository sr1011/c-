#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください　：");
  scanf("%d", &no);

  printf("%dに13を加えると%dです。\n",no,no + 13);

  return 0;
}
