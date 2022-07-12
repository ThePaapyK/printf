#include "main.h"

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);
}

int print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	return (strlen(s));
}

int print_int_helper(int n, int base, int *count)
{
	int i, temp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		(*count)++;
	}
	if (n == 0)
	{
		_putchar('0');
		(*count)++;
		return (0);
	}
	for (i = 1; n / base > 0; i++)
		n /= base;
	for (i = i - 1; i >= 0; i--)
	{
		temp = n % base;
		if (temp < 10)
			_putchar(temp + '0');
		else
			_putchar(temp - 10 + 'a');
		(*count)++;
	}
	return (0);
}

int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	int count = 0;

	print_int_helper(n, 10, &count);
	return (count);
}

int print_percent(va_list ap)
{
	(void)ap;
	_putchar('%');
	return (1);
}