#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
   * _islower - prints to lowercase
   * Return: Always int
   *
   * @c: the variable to test
   */
int _islower(int c)/* c - deoas stuff */
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);

}
