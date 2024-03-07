#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: pointer to string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int print = 0;

	va_list ap;

	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			print = specifier(format, ap, print);
			format++
		}
		else
		{
			_putchar(*format);
			print++;
			format++;
		}
	}
	va_end(ap);
	return (print);
}


