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
	char op;
	void (*f)();
} func_t;

/* _putchar function */
int _putchar(char c);

/* Function that produces output according to a format */
int _printf(const char *format, ...);

/* print functions */
void printstr(char *str);
void printint(int n);
void printchar(va_list ap);
void printstring(va_list ap);
void printpercent(va_list ap);
void printinteger(va_list ap);

#endif /* MAIN_H */
