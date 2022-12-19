#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverse string
 * @c: input char
 * Return: void
 */
void rev_string(char *s)
{
	int count = strlen(s);
	int i;

	for (i = count; i >= count; --i)
	{
		if (s[i] != '\n')
		{
			printf("%c", s[i]);
		}
	}
}
