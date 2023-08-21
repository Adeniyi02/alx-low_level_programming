/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: None (void).
 */
void swap_int(int *a, int *b)
{
    int temp = *a;  // Store the value of the first integer in a temporary variable.
    *a = *b;        // Assign the value of the second integer to the first integer.
    *b = temp;      // Assign the value from the temporary variable to the second integer.
}
