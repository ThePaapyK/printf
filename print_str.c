#include "main.h"

/**
 * print_char - Prints a character to stdout
 * @ap: The argument pointer
 *
 * Return: The number of characters printed
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Prints a string to stdout
 * @ap: The argument pointer
 *
 * Return: The number of characters printed
 */
int print_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i, ret = 0;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		ret++;
	}
	return (ret);
}

/**
 * print_percent - Prints a percent to stdout
 * @ap: The argument pointer
 *
 * Return: The number of characters printed
 */
int print_percent(va_list ap __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
