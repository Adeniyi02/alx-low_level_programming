#include <stdio.h>

char *_memset(char *s, char b, unsigned int n) {
  /* Check the arguments */
  if (s == NULL) {
    return NULL;
  }
  if (n == 0) {
    return s;
  }

  /* Fill the memory */
  for (unsigned int i = 0; i < n; i++) {
    s[i] = b;
  }

  /* Return the pointer to the memory area */
  return s;
}

int main() {
  char s[10];
  _memset(s, 'A', 5);
  printf("%s\n", s);

  return (0);
}
