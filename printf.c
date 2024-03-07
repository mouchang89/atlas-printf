#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: pointer to string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;

	va_list list;

	va_start(args, format);


