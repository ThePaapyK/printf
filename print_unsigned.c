#include "main.h"

int print_unsigned_int(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned);
	int len = 0;

	len = print_int_helper(n);
	return (len);

	return (0);
}
