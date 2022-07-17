#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @ap: va_list
 *
 * Return: number of characters printed
 */
int print_binary(va_list ap)
{
	int n = va_arg(ap, int);
	int i, count = 0;
	int tmp;
	int len = 0;
	char *s = (char *)malloc(sizeof(char) * 32);

	while (n != 0)
	{
		tmp = n % 2;
		s[len++] = tmp + '0';
		n /= 2;
	}
	s[len] = '\0';
	rev_string(s);
	for (i = 0; i < len; i++)
	{
		putchar(s[i]);
		count++;
	}
	free(s);
	return count;
}
