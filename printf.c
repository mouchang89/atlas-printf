#include "main.h"

/**
 * _printf - print to standard output from formatted text
 * @format: character string containing specifiers
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	int i, str_count, count = 0;

	va_list ap;

	if (*format == '\0')
	{
		return (-1);
	}

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(ap, int));
			i++;
		}
		else if (format[i + 1] == 's' && format[i + 1] != '\0')
		{
			str_count = puts(va_arg(ap, char *));
			i++;
			count += (str_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		else if (format[i + 1] == 'd')
		{
			_putchar(va_arg(ap, int));
			i++;
		}
		else if (format[i + 1] == 'i')
		{
			_putchar(va_arg(ap, int));
			i++;
		}
		count++;
	}
	va_end(ap);
	return (count);
}


