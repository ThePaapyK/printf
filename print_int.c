#include "main.h"

/**
 * print_int_helper - helper function for print_int
 * @n: the number to print
 *
 * Return: the number of characters printed
 */
int print_int_helper(int n)
{
	unsigned int i;
	int count = 0;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		count++;
		i = -i;
	}

	if (i < 10)
	{
		count += _putchar(i + '0');
		return (count);
	}

	if (i > 9)
	{
		count += print_int_helper(i / 10) + 1;
		_putchar((i % 10) + '0');
		return (count);
	}

	return (0);
}

/**
 * print_int - Prints an integer to stdout
 * @ap: The argument pointer
 *
 * Return: The number of characters printed
 */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	int count = 0;


	count = print_int_helper(n);
	return (count);
}
