#include "main.h"

/**
 * get_func - get the function pointer
 * @c: the operator
 * @ap: the argument pointer
 *
 * Return: the function pointer
 */
int (*get_func(char c))(va_list)
{
	int i;

	func_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_decimal},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (c == *(ops[i].op))
		{
			return (ops[i].func);
		}
	}
	return (0);
}
