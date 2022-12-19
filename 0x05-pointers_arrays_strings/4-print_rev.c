#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints strings in reverse
 * @s: input character
 * Return: void
 */
void print_rev(char *s)
{

	int count = strlen(s);
	int i;

	for (i = count; i >= 0; --i )
	{
		if (s[i] != '\0')
		{
		printf("%c",s[i]);
		}

	}
	putchar('\n');
}
