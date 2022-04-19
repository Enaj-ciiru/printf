#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);

	if (dest == NULL)
	{
		return (NULL);
	}

	_memcpy(dest, s, len);

	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}
/**
 * write_base - sends characters to be on standard output
 * @str: string to parse
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
}
/**
 * base_len - calculates the length for an octal number
 * @num: the number which the length is calculated
 * @base: base to be calculated by
 * Return: integer repping the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
		num = num / base;
	return (i);
}
/**
 * _memcpy - copy memory area
 * @dest: copied destination
 * @src: source to copy from
 * @n: the number of bytes to copy
 * Return: the _memcpy() function returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}