#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
 * , from 0 to 14, followed by a new line.
 * Return: void
 */
void more_numbers(void)
{
	int n, x;

	for (n = 1; n <= 10; n++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar('1');
			_putchar (x % 10 + '0');
		}
		_putchar('\n');
	}
}
