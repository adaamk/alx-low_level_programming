#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'z' && c >= 'z')
		return (1);
	else
		return (0);
}
