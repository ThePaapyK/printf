#include "main.h"

/**
 * printstr - Prints a string
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int printstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}

/**
 * printint - Prints an integer
 * @n: The integer to print
 *
 * Return: The number of characters printed
 */
int printint(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 9)
	{
		printint(n / 10);
	}
	_putchar(n % 10 + '0');

	return (0);
}

/**
 * printchar - Prints a character
 * @ap: The argument pointer
 *
 * Return: The number of characters printed
 */
int printchar(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);

	return (0);
}

/**
 * printstring - Prints a string
 * @ap: The argument pointer
 *
 * Return: The number of characters printed
 */
int printstring(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	printstr(s);

	return (0);
}

/**
 * printpercent - Prints a percent sign
 * @ap: The argument pointer
 *
 * Return: The number of characters printed
 */
int printpercent(va_list ap)
{
	(void)ap;
	_putchar('%');

	return (0);
}

/**
 * printinteger - Prints an integer
 * @ap: The argument pointer
 *
 * Return: The number of characters printed
 */
int printinteger(va_list ap)
{
	int n;

	n = va_arg(ap, int);
	printint(n);

	return (0);
}
