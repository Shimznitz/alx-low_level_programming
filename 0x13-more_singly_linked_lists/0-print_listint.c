#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: pointer to struct listint
 * Return: a sizeof
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	ptr = h;

	while (prt != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
