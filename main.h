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
typedef struct func_s {
	char *op;
	int (*f)();
} func_t;

/* _putchar function */
int _putchar(char c);

/* Function that produces output according to a format */
int _printf(const char *format, ...);

/* print functions */
int printstr(char *str);
int printint(int n);
int printchar(va_list ap);
int printstring(va_list ap);
int printpercent(va_list ap);
int printinteger(va_list ap);

#endif
