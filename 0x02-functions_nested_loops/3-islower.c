#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is the character
 *
 * Return: 1 (success) and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
