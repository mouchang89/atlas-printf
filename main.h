#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int print_format(va_list ap, char *format);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
