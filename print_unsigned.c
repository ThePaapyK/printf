#include "main.h"

/**
 * print_unsigned_int - prints unsigned integer
 * @ap: va_list from which input argument is obtained
 * Return: 0
 */

int print_unsigned_int(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int len = 0;

	len = print_int_helper(n);
	return (len);

	return (0);
}
