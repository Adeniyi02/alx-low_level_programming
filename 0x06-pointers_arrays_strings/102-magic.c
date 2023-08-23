#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code always for easy identification
   * notice:
   * - do not use a as a character
   * - you are not allowed to modify p
   * - just a single statement
   * - you are not allowed to code anything else other than this task code
   */
  *(p + 5) = 98;
  /* thereby, machine can print 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
