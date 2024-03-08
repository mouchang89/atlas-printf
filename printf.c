#include "main.h"

/**
 * print - 
 * @ap: arguments
 * @format: pointer to string
 *
 * Return: Always 0.
 */
int print_format(va_list ap, char *format)
{
	switch (format)
	{
		case 'c':
		{
			return ((print_char(ap, format));
		}
		case 's':
		{
			return ((print_string(ap, format));
		}
		case '%':
		{
			return ((print_percent(ap, format));
		}
		case 'd':
		{
			return ((print_integer(ap, format));
		}
		case 'i':
		{
			return ((print_integer(ap, format));
		}
	}
	return (0);
}
/**
 * _printf - produces output according to a format
 * @format: pointer to string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int print_format = 0;

	va_list ap;

	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			print_format += va_arg (ap, *format);
			format++;
		}
		else
		{
			_putchar(*format);
			print_format++;
			format++;
		}
	}
	va_end(ap);
	return (print_format);
}


