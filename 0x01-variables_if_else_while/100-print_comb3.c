#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = '0';
	int i = '0';

	for (i = '0'; i <= '9'; i++)/*print 10s digit*/
	{
		for (a = '0'; a <= '9'; a++)/*prints the 1s digit*/
		{
			if (!((a == i) || (i > a)))/* to eliminate any repetions*/
			{
				putchar(i);
				putchar(a);
				if (!(a == '9' && i == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
