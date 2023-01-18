#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - prints array
 * @array: an arrray of elements
 * @size: size of array
 * @action: funtion
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
	{

		for (; i < size; i++)
		{
			action(array[i]);
		}
	}

}
