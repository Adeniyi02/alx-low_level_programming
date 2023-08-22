#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    int i;

    srand(time(NULL)); // Seed the random number generator with the current time

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int randomIndex = rand() % (sizeof(charset) - 1);
        password[i] = charset[randomIndex];
    }

    password[PASSWORD_LENGTH] = '\0'; // Add the null terminator

    printf("Generated Password: %s\n", password);

    return 0;
}
