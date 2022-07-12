#include "main.h"

/**
 * print_int_helper - helper function for print_int
 * @n: the number to print
 * @base: the base of the number
 * @sign: the sign of the number
 * @count: the number of characters printed
 *
 * Return: the number of characters printed
 */
int print_int_helper(int n, int base, int *count)
{
	int i, ret = 0;

	if (n < 0)
	{
		_putchar('-');
		ret++;
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		ret++;
	}

	for (i = 0; n > 0; i++)
	{
		count[i] = n % base;
		n = n / base;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(count[i] + '0');
		ret++;
	}
	return (ret);
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

	count = print_int_helper(n, 10, &count);
	return (count);
}
