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
	unsigned int print, i = 0;
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
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				string = va_arg(valist, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				print = 0;
				break;
			}
			if (format[i + 1] && print)
				printf(", ");
			i++;
		}

		va_end(valist);
		break;
	}
	printf("\n");
}
