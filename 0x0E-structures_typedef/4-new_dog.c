#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog with given information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog = malloc(sizeof(dog_t));

    if (new_dog)
    {
        new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
        new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

        if (new_dog->name && new_dog->owner)
        {
            strcpy(new_dog->name, name);
            new_dog->age = age;
            strcpy(new_dog->owner, owner);
            return (new_dog);
        }

        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
    }

    return (NULL);
}
