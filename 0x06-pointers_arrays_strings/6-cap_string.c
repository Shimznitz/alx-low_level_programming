#include <stdio.h>
#include "main.h"
/**
 * *cap_string - prints
 * @s: pointer
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 0;

	char del[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
	for (j = 0; del[j] != '\0'; j++)
		if (s[i] == del[j] && s[i +1] >= 97 && s[i + 1] <= 122)
			s[i + 1] = s[i + 1];
	}
	return (s);
}
