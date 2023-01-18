#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - prints array
 * @array: an arrray of elements
 * @size: size of array
 * @action: funtion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < 5; i++)
	{
	action(array[i]);
	}
}
