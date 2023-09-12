#include "dog.h"

int main() {
  dog_t *d = new_dog("Sammy", 3.5, "John Doe");

  print_dog(d);

  free_dog(d);

  return 0;
}
