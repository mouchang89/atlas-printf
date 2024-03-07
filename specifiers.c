#include "main.h"

/**
 * specifier - selects which conversion specifier to print
 * @format: list of types of arguments passed to function
 * @ap: number of arguments
 * @print: prints specifier character
 *
 * Return: printed characters
 */
int specifier(const char *format, va_list ap, int print)
{
	switch (*format)
	{
		case 'c':
			_putchar(va_arg(ap, int));
			print++;
			break;
		case 's':
			print = printf_string(ap, print);
			break;
		case '%':
			_putchar('%');
			print++;
			break;
	}
	return (print);
}
