#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * _isalpha(int c) - prints true if upper or lowercase
 * @c: The character to test
 *
 * Return: varying responses
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
