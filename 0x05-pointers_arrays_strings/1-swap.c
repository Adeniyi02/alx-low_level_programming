#include "main.h"
/**
*swap_int - swaps the value of int a and int b 
* Return 0
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
