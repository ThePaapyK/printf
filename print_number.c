#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @ap: The argument pointer
 *
 * Return: The number of characters printed
 */
int print_binary(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int i;
	char *str;

	str = malloc(sizeof(char) * 33);
	if (str == NULL)
		return (-1);

	str[32] = '\0';

	for (i = 31; i >= 0; i--)
	{
		str[i] = (n & 1) + '0';
		n = n >> 1;
	}

	_puts(str);
	free(str);
	return (32);
}
