#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
void printchar(va_list ap);
void printstring(va_list ap);
void printint(va_list ap);
void printfloat(va_list ap);
void printi(long int i);
void _prints(char *s);

/**
 * struct option - contains members for creating printf
 * @s: member 1
 * @f: member 2
 */

typedef struct option
{
	char *s;
	void (*f)();
} opt;
#endif /* MAIN_H */
