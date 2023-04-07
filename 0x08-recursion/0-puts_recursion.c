#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: function input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
		_putchar('\n');
}