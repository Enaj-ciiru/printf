#include "main.h"
/**
 * _write_ch - writes the character ch to stdout
 * @ch: character to print
 *
 * Return: On success 1, on error -1
 */
int _write_ch(char ch)
{
	return (write(1, &ch, sizeof(char)));
}
/**
 * print_ch - prints character
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_ch(va_list list)
{
	_write_ch(va_arg(list, int));
	return (1);
}
/**
 * print_str - prints a string
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_str(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_write_ch(s[i]);
	return (i);
}
/**
 * print_pcnt - prints a percent symbol
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_pcnt(__attribute__((unused))va_list list)
{
	_write_ch('%');
	return (1);
}
