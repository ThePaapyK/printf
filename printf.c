#include "main.h"

/**
 * _printf - prints the string to stdout
 * @format: the string to print
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int index = 0;

	if (format != NULL)
	{
		va_list args;
		int (*func)(va_list);

		va_start(args, format);

		while (format[index] != '\0')
		{
			if (format[index] == '%')
			{
				index++;
				func = get_func(format[index]);

				if (func != NULL)
					count += func(args);

				else
					count += _putchar('%');
			}

			else
				count += _putchar(format[index]);

			index++;
		}
		va_end(args);
	}
	return (count);
}
