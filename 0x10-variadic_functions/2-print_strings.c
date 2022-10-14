#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: The string to be printed
 * @n: The number of strings
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;

	char *strg;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		strg = va_arg(list, char *);

		if (strg)
		{
			printf("%s", strg);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(list);
}
