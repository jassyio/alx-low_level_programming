#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;

  /* add this line to change the value of n indirectly via the pointer p */
  *p = a[2] - 926;

  printf("a[2] = %d\n", a[2]);
  return (0);
}

