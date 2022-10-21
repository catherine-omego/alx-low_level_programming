#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void pirint_all(const char * const format, ...);

#include <stdarg.h>

/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 *
 */

typedef struct print

{
	char *t;
	void (*f)(va_list);
} print_t;

#endif
