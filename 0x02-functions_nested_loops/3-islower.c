#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
   * _islower - prints to lowercase
   * Return: Alway int
   */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);

}
