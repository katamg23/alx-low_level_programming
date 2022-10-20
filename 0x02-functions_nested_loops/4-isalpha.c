#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: integer value to be compared to ASCII character value
 *
 * Return: 1 if alphabetic character otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
