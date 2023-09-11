#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *file_name = __FILE__;
    int i = 0;

    while (file_name[i] != '\0')
    {
        if (file_name[i] == '/')
        {
            file_name = file_name + i + 1;
            break;
        }
        i++;
    }

    char *result = malloc(1024 * sizeof(char));
    if (result == NULL)
        exit(EXIT_FAILURE);

    int j = 0;
    while (file_name[j] != '\0')
    {
        result[j] = file_name[j];
        j++;
    }
    result[j] = '\n';
    result[j + 1] = '\0';

    char *ptr = result;
    while (*ptr)
    {
        write(1, ptr, 1);
        ptr++;
    }

    free(result);

    exit(EXIT_SUCCESS);
}


