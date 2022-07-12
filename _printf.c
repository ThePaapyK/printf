#include "main.h"

/**
 * _printf - Printf function
 * @format: The format of the string
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, j;
	va_list ap;

	func_t funcs[] = {
		{'c', printchar},
		{'s', printstring},
		{'%', printpercent},
		{'i', printinteger},
		{'d', printinteger},
		{0, NULL}
	};

	va_start(ap, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			while (funcs[j].op != 0)
			{
				if (format[i] == (funcs[j].op))
				{
					funcs[j].f(ap);
					break;
				}
				j++;
			}
			if (j > 4)
			{
				_putchar(format[i - 1]);
				_putchar(format[i]);
			}
		}
		else

		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(ap);

	return (i);

}
