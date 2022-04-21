#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct list - struct list
 * @va: valid character
 * @f: the associated functions.
 */
typedef struct list
{
	char *va;
	int (*f)(va_list);
} list_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int (*get_printf_func(char x))(va_list args);

#endif
