#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: a string containing all the needed characters
 * Return: number of characters printed(excluding the null terminator)
 */
int _printf(const char *format, ...)
{
	int count;
	int total = 0;
	va_list args;
	int flag = 0;
	
	if (format == NULL)
		return (0);

	va_start(args, format);

	for (count = 0; *(format + count) != '\0'; count++)
	{
		if (format[count] == '%')
			flag = 1;
		else if (flag == 1)
		{
			flag = 0;
			switch (format[count])
			{
				case 'c':
			}
		}
	}

	va_start(arg_list, format);
	/*calling parser function*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
