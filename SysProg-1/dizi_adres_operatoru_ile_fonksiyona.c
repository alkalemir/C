#include <stdio.h>

void foo(int(*pa)[3])
{
  int i;

  for (i = 0; i < 3; ++i)
    printf("%d ", (*pa)[i]);
  printf("\n");
}

int main(void)
{
  int a[3] = { 1, 2, 3 };

  foo(&a);/* geçerli */

  return 0;
}
