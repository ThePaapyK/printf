#include "main.h"

int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int index = 0;
		va_list args;
		int (*func)(va_list);

		va_start(args, format);
		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		count = 0;
		while (format[index] != '\0')
		{
			if (format[index] == '%')
			{
				count += _putchar(format[index]);
				index++;
			}

			else if (format[index + 1] != '\0')
			{
				func = get_func(format[index + 1]);
				count += (func ? func(args) : _putchar(format[index]) + _putchar(format[index + 1]));
				index ++;
			}
			else
				count += _putchar(format[index]);
		}
		va_end(args);
	}
	return (count);
}
