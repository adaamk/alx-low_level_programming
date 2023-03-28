#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * , starting with the first character, followed by a new line
 * @str: the input argument
 * Return: chars
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	i = len -1;
	for (o = 0; o <= i; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
