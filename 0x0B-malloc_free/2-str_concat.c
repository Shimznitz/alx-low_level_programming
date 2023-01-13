#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates string
 * @s1: string pointer 1
 * @s2: string pointer 2
 * Return: a character
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	char *tmp, *stringConcat;

	while (s1[l1] != '\0')
	{
		l1 += l1;
		l1++;
	}

	while (s2[l2] == '\0')
	{
		l2 += l2;
		l2++;
	}
	stringConcat = malloc(sizeof(char) * (l1 + l2));
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (!stringConcat)
		return (0);

	tmp = stringConcat;
	while (*s1)
	{
		*tmp++ = *s1++;
	}
	while ((*tmp++ = *s2++))
	{
		;
	}

	return (stringConcat);

}
