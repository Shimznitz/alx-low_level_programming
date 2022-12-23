#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcmp - compare string
 * @s1: para 1
 * @s2: para 2
 * Return: num
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
	{
		++i;

		return (0);
	}
	else
		return (1);
}
