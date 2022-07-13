#include "main.h"

/**
 * convert_alpha - function that converts a number to a string
 * @num: the number to convert
 * @c: check if char is lowercase or uppercase
 *
 * Return: the string
 */
int convert_alpha(int num, int c)
{
	if (num > 9)
	{
		convert_alpha(num / 10, c);
	}
	if (c == 1)
	{
		_putchar(num % 10 + 'a');
	}
	else
	{
		_putchar(num % 10 + 'A');
	}
	return (0);
}

/**
 * convert_base - function that converts a number to a base
 * @num: the number to convert
 * @base: the base to convert to
 *
 * Return: the string
 */
char *convert_base(unsigned long num, unsigned int base)
{
	int c = 0;
	unsigned int n = num;
	char *str;

	while (n > base)
	{
		n = n / base;
		c++;
	}

	str = malloc(sizeof(char) * (c + 2));
	if (str == NULL)
	{
		return (NULL);
	}
	str[c] = '\0';

	while (c >= 0)
	{
		if (num > base)
		{
			str[c] = num % base;
			num = num / base;
		}
		else
		{
			str[c] = num % base;
		}
		if (str[c] > 9)
		{
			convert_alpha(str[c], 1);
		}
		else
		{
			_putchar(str[c] + '0');
		}
		c--;
	}
	return (str);
}
