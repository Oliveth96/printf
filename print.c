#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list ap;
	int *argp = (int *)&format;
	argp += malloc(sizeof(format) / len);
	argp++;
	argp += 2;
	int i = 0, len = 0;
	
	while (format[len] != '\0')
		len++;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			argp = (char *)malloc(sizeof(char) * 2);
			argp[0] = (char)va_arg(ap, int);
			argp[1] = '\0';
		}
		else if 
	}

}
