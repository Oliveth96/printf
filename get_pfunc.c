#include "main.h"

/**
 * get_pfunc - looks for list
 * @x: function variable
 * Return: function
 */
int (*get_pfunc(char x))(va_list args)
{
	int i = 0;
	list_t arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	while (arr[i].va)
	{
		if (x == arr[i].va[0])
			return (arr[i].f);
		i++
	}
	return (NULL);
}
