#include "function_pointers.h"

/**
 * print_name - for a function that prints a given name.
 * @name:represents the name given
 * @f: is the function of name
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
