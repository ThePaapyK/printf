#include "main.h"

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

	else if (n > 9)
		printint(n / 10);
	_putchar((n % 10) + '0');

	return (0);
}

/**
 * printstr - Prints a string
 * @s: The string to print
 *
 * Return: The number of characters printed
 */
char printstr(char *str)
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
 * printchar - Prints a character
 * @ap: The argument list
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
 * @ap: The argument list
 *
 * Return: The number of characters printed
 */
int printstring(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	printstr(s);

	return (0);
}

/**
 * printpercent - Prints a percent
 * @ap: The argument list
 *
 * Return: The number of characters printed
 */
int printpercent(va_list ap)
{
	char c;

	c = va_arg(ap, int);

	if (c == '%')
		_putchar(c);
	else
		_putchar('%');

	return (0);
}

/**
 * printinteger - Prints an integer
 * @ap: The argument list
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

int _printf(const char *format, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, format);
	i = 0;

	func_t func[] = {
		{"c", printchar},
		{"s", printstring},
		{"%", printpercent},
		{"d", printinteger},
		{"i", printinteger},
		{NULL, NULL}
		};

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (func[i].op != NULL)
			{
				if (format[i] == *func[i].op)
				{
					func[i].func(ap);
					break;
				}
				i++;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(ap);

	return (0);
}
