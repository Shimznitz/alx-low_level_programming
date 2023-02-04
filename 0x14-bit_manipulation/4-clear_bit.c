#include "main.h"
/**
 * clear_bit - sets the value of a bit in an index
 * @n: the bit
 * @index: the index
 * Return: a bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

