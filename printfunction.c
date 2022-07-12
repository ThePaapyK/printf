#include "main.h"

/**
 * printstr - Prints a string
 * @str: The string to print
 *
 */
void printstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}


}

/**
 * printint - Prints an integer
 * @n: The integer to print
 *
 */
void printint(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		printint(n / 10);
	}
	_putchar(n % 10 + '0');


}

/**
 * printchar - Prints a character
 * @ap: The argument pointer
 *
 * Return: The number of characters printed
 */
void printchar(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);


}

/**
 * printstring - Prints a string
 * @ap: The argument pointer
 *
 */
void printstring(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	printstr(s);


}

/**
 * printpercent - Prints a percent sign
 * @ap: The argument pointer
 *
 */
void printpercent(va_list ap)
{
	(void)ap;
	_putchar('%');


}

/**
 * printinteger - Prints an integer
 * @ap: The argument pointer
 *
 */
void printinteger(va_list ap)
{
	int n;

	n = va_arg(ap, int);
	printint(n);


}
