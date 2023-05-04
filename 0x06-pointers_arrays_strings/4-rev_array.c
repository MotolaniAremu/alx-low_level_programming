#include "main.h"

/**
 * reverse_array - reverses an array of integars
 * @a: array
 * @n: number of elemants of the array
 * Return: rev
 */
void reverse_array(it *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
