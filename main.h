#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct func_s - Struct func_s
 * @op: The operator
 * @f: The function associated
 */
typedef struct func_s
{
	char *op;
	int (*func)(va_list);
} func_t;

/* _putchar function */
int _putchar(char c);

/* rev_string function */
void rev_string(char *s);

/* Function that produces output according to a format */
int _printf(const char *format, ...);

/* get_func function */
int (*get_func(char c))(va_list);

/* print_str functions */
int print_char(va_list arg);
int print_string(va_list arg);

/* print_percent function */
int print_percent(va_list arg __attribute__((unused)));

 /* print_int functions */
 int print_int(va_list arg);
 int print_decimal(va_list arg);

#endif
