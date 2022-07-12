#include "main.h"

/**
 * _printf - Printf function
 * @format: The format of the string
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	va_list ap;

	func_t funcs[] = {
		{"c", printchar},
		{"s", printstring},
		{"%", printpercent},
		{"i", printinteger},
		{"d", printinteger},
		{NULL, NULL}
	};

	va_start(ap, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			while (funcs[i].op != NULL)
			{
				if (format[i] == *(funcs[i].op))
				{
					funcs[i].f(ap);
					break;
				}
				i++;
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
