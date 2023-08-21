/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0; // Initialize a variable to store the length of the string.

    while (*s != '\0') // Iterate through the string until the null terminator is reached.
    {
        length++; // Increment the length for each character encountered.
        s++;      // Move the pointer to the next character.
    }

    return length; // Return the calculated length of the string.
}
