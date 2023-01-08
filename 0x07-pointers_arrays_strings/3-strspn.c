#include "main.h"
/**
 * _strspn - get legnth of prefix of substrings
 * @s: sring to search
 * @accept: substring of accepted characters
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
