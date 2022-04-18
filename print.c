#include "MAIN_H"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
{
	(void) format;
	return printf("Test\n");
}
