#include "main.h"

/**
 * swap_int - Swaping the value of two intigers
 * @a: first integer
 * @b: second integer
 * Return:void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b  = *a;
	*a = tmp;
}
