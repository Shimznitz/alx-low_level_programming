#include "lists.h"
/**
 * listint_len - prints all elements of a list
 * @h: pointer to struct listint
 * Return: a sizeof
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
