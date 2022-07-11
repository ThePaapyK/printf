#include "main.h"
#include <unistd.h>

void printi(long int i);
void _prints(char *s);


/**
 * printint - prints argument passed from va_list
 * @ap: argument passed from va_list
 */
void printint(va_list ap)
{
	printi(va_arg(ap, int));
}

/**
 * printchar - prints character
 * @ap: argument passed from va_list
 */
void printchar(va_list ap)
{
	_putchar(va_arg(ap, int));
}

/**
 * printstring - prints string
 * @ap: argument passed from va_list
 */
void printstring(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	_prints(s);
}

/**
 * _prints - prints string
 * @s: string to be printed
 */

void _prints(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}

/**
 * printi - prints integer
 * @i: integer to be printed
 */
void printi(long int i)
{
	/**
	* If number is smaller than 0, put a - sign
	* and change number to positive
	*/
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}

	/* Remove the last digit and recur */
	if (i / 10)
		printi(i / 10);

	/* Print the last digit */
	_putchar(i % 10 + '0');
}

/**
 * _printf - almost like the standard printf function
 * @format: string of formats for printing
 * Return: 0
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	va_list ap;

	opt bank[] = {
		{ "%c", printchar },
		{ "%s", printstring }
	};

	i = 0;
	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 's')
		{
			bank[1].f(ap);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			bank[0].f(ap);
		}
		else if ((i == 0) || (i > 0 && format[i - 1] != '%'))
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (0);
}
