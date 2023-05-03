#include "main.h"

/**
 * swap_int - swaps the values of two integars
 * @a: int a
 * @b: int b
 * Return: On success 1
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
