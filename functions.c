#include "main.h"
/******************PRINT CHAR******************/
/**
 * print_char - prints a char
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width
 * @percision: Percision specification
 * @size: Size speifier
 * Return: Number o chars printed
 */
int print_char(va_list types, char buffer[], int flags, int width , int precision, int size);
{
char c = va_arg(types,int);
	return (handle_write_char(c, buffer, flags, width, precision, size));
}
/******************PRINT A STRING******************/
/**
 * print_string - prints a string
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_string(va_list, char buffer[], int flags, int width, int precision, int size);
{
int length = 0, i;
char *str = va_arg(types, char *);
UNUSED(buffer);
UNUSED(flags);
UNUSED(width);
UNUSED(precision);
UNUSED(size);
	if (str == NULL)
{
	str = "(null)"
	if (precision >= 6)
	str = "    ";
}
	while (str[length] !='\0')
	length++;
	if (precision >=0 && preision < length)
	length = precision;
	if (width > length )
	{
	if (flags & F_MINUS)
	{
	write(1,&str[0],length);
	for (i = width - length; i > 0; i-)
	write(1,"",1)
	return (width);
	}
	else
	{
	for (i = width - length; i > 0;i-)
	write(1,"",1)
	return (width);
	}
}
	return (write(1,str,length));
}
