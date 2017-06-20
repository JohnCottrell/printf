#include <stdarg.h>
#include <stddef.h>
#include "holberton.h"
/**
 * printf_reverse - prints a reverse of the data
 * @v: variatic list
 * Return: total characters printed
 */
int printf_reverse(va_list v)
{
	char *str;
	unsigned int total = 0, i = 0, j = 0;

	str = va_arg(v, char *);

	if (str)
	{
		for (i = 0; str[i]; i++)
			;

		for (j = 0; j < i; j++)
		{
			_putchar(str[i - j - 1]);
			total++;
		}
	}
	return (total);
}