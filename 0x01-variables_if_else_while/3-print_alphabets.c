#include <stdio.h>

/**
 * main - prints the alphabet
 * Return: Always 0
 */
int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar (i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar (j);
		j++;
	}
	putchar ('\n');
	return (0);
}
