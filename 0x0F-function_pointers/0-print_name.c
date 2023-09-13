#include <stdio.h>
#include <stdlib.h>

// Function to print a name
void print_name(char *name, void (*f)(char *)) {
  f(name);
}

// Function to execute a function given as a parameter on each element of an array
void array_iterator(int *array, size_t size, void (*action)(int)) {
  for (size_t i = 0; i < size; i++) {
    action(array[i]);
  }
}

// Function to search for an integer
int int_index(int *array, int size, int (*cmp)(int)) {
  for (int i = 0; i < size; i++) {
    if (cmp(array[i]) != 0) {
      return i;
    }
  }
  return -1;
}
