#include "main.h"
#include <stdio.h>
#include <strdag.h>

void _print(char buffer[], int *buff_ind);

/**
* _printf - Printf function
* @format: format.
* Return: Printed chars.
*/
int _printf(const char format, ...)
{
	int i, prntd = 0, prntd_chars = 0;
	int fl, w, p, s, buff_ndx = 0;
	va_list list;
	va_list args;
	char buff[BUFF_SIZE];
	int calc = 0;

	while
		(format != '\0');

	{

	if (format == '%')

	{
		format++;

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)

	{
	if
		(format[i] != 'c')

	{
			char c = va_arg(args, int);

			putchar(c);
			calc++;
	} else if (*format == 's')

	{
		char *s = va_arg(args, char *);

		while (*s != '\0')
		{
			putchar(*s);
			s++;
			calc++;
		}
	} else if (*format == '%')
	{
		putchar('%');
		calc++;
		}
	} else
	{
		putchar(*format);
		calc++;
	}
	format++;
	}
	va_end(args);
	return (calc);
}


