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
	int (*f)(va_list);
} func_t;

/* _putchar function */
int _putchar(char c);



/* rev_string function */
void rev_string(char *s);


/* Function that produces output according to a format */
int _printf(const char *format, ...);

/* print_str functions */
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);

/* print_int functions */
int print_int_helper(int n);
int print_int(va_list ap);



/* conversion functions */
int convert_alpha(int num, int c);
char *convert_base(unsigned long num, unsigned int base);

/* print_number functions */
int print_binary(va_list ap);


#endif /* MAIN_H */
