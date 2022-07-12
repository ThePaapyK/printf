#include "main.h"

/**
 * convert_alpha_num - function that converts a number to a string
 * @n: the number to convert
 * @upper: upper case or not
 *
 * Return: the string
 */
int convert_alpha_num(int n, int upper)
{
	if (n > 9)
		return (n - 10 + (upper ? 'A' : 'a'));
	else
		return (n + '0');
}

/**
 * convert_base - converts unsigned base 10 to given base
 * @n: the number to convert
 * @base: the base to convert to
 * @upper: upper case or not
 *
 * Return: the string
 */
char *convert_base(unsigned long n, unsigned int base, int upper)
{
	int i = 0;
	char *str;

	while (n >= base)
	{
		n = n / base;
		i++;
	}

	str = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
		return (NULL);

	str[i + 1] = '\0';

	while (i >= 0)
	{
		str[i] = convert_alpha_num(n % base, upper);
		n = n / base;
		i--;
	}

	return (str);
}
