#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to output 
 * which is the caharacter to print
 *
 * Return: success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
