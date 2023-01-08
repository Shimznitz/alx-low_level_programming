#include "main.h"
/**
 * _strchr - finds character
 * @s: points to character
 * @c: char to be found
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
