#include <stdio.h>
/**
 * array_iterator - prints array
 * @array: an arrray of elements
 * @size: size of array
 * @action: funtion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	action(array++);
}
