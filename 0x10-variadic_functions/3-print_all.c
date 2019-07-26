#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print characters, integers, floats, and strings
 * @format: List of types of arguments passed to the function
 * (c for character, i for integer, f for float, s for char *)
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, print = 0;
	char *string;

	while (format)
	{
		va_start(valist, format);
		while (format[i])
		{
			print = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", (char) va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(valist, double));
				break;
			case 's':
				string = va_arg(valist, char *);
				if (string)
					printf("%s", string);
				else
					printf("(nil)");
				break;
			default:
				print = 0;
				break;
			}
			if (format[i + 1] && print)
				printf(", ");
			i++;
		}
		printf("\n");
		va_end(valist);
		break;
	}
}
