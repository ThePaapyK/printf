#include "main.h"
/**
 * print_int - print an integer
 * @arg: the argument
 * Return: the number of characters printed
 */
int print_int(va_list arg)
{
	int num;
	unsigned int count, abs_num, aux, i;

	num = va_arg(arg, int);
	count = 0;

	if (num < 0)
	{
		_putchar('-');
		abs_num = num * -1;
		count++;
	}
	else
		abs_num = num;

	aux = abs_num;
	i = 1;

	while (aux > 9)
	{
		aux /= 10;
		i *= 10;
	}

	while (i > 0)
	{
		_putchar((abs_num / i) % 10 + '0');
		i /= 10;
		count++;
	}
	return (count);
}

/**
 * print_decimal - prints a decimal number
 * @arg: the argument
 *
 * Return: the number of characters printed
 */
int print_decimal(va_list arg)
{
	return (print_int(arg));
}
