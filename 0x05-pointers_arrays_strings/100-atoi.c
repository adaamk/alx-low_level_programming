#include "main.h"
/**
 * _atoi -  function that convert a string to an integer
 * @s: string to be converted
 * Return: the integer that is converted
 */
int _atoi(char *s)
{
	int i, x, n, len, f, num;

	i = 0;
	x = 0;
	n = 0;
	len = 0;
	f = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (x % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}