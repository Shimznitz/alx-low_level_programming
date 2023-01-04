#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - stdout strlen
 * @s: char
 * Return: interger
 */
int _strlen_recursion(char *s)
{
	if (s = '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(char *s));
	}
}
