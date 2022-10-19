#include <stdio.h>

/**
 * main - Entry alphabet without q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char dh;

	for (dh = 'a'; dh <= 'z'; dh++)
	{
		if (dh != 'e' && dh != 'q')
			putchar(dh);
	}

	putchar('\n');
	return (0);
}
