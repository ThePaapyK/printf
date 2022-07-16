#include "main.h"
/**
 * print_char - Prints a character to stdout
 * @arg: The argument to print
 *
 * Return: The number of characters printed
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_string - prints the string to stdout
 * @arg: the string to print
 *
 * Return: the number of characters printed
 */
int print_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	int index = 0;
	int count = 0;

	if (str != NULL)
	{
		while (str[index] != '\0')
		{
			count += _putchar(str[index]);
			index++;
		}
	}

	else
		str = "(null)";

	return (count);
}