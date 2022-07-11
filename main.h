#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

typedef struct func_specifier {
	char *name;
	int (*func)(va_list, int);
} func_t;

/* Function that produces output according to a format */
int _printf(const char *format, ...);

#endif
