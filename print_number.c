#include "main.h"

int print_binary(va_list ap)
{
	int num = va_arg(ap, int);
	int i, c = 0;
	char *str;

	str = convert_base(num, 2);
	if (str == NULL)
	{
		return (-1);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		c++;
	}
	free(str);
	return (c);
}
