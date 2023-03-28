#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * , followed by a new line
 * @s: the string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int count;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (count = len; count > 0; count--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
