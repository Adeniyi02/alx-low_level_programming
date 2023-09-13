// Function to execute a function given as a parameter on each element of an array
void array_iterator(int *array, size_t size, void (*action)(int)) {
  for (size_t i = 0; i < size; i++) {
    action(array[i]);
  }
}
