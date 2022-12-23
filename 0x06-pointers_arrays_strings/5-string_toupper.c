#include "main.h"
/**
 * string_toupper - lower to upper
 * @s: pointer to char
 * Return: *s
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}

