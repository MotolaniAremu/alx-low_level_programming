#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the alphabet without q and e.
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
