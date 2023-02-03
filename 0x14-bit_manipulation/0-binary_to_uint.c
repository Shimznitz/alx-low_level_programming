#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <math.h>
#include <string.h>
/**
 * binary_to_uint - binary to unsigned int
 * @b: char
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1;
	unsigned int dec_num = 0;
	unsigned int count = 0;

	unsigned int binary = atoi(b);
	unsigned int temp = binary;
	unsigned int str_len = strlen(b);

	do {
		binary /= 10;
		++count;
		} while (binary != 0);

	if (count != str_len)
	{
		return (0);
	}
	if (b == NULL)
	{
		return (0);
	}
	while (temp)
	{
		unsigned int last_num = temp % 10;
		temp = temp / 10;
		dec_num += last_num * base;
		base = base * 2;
	}

	return (dec_num);
}
