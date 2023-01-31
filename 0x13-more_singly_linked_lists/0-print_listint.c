#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: pointer to struct listint
 * Return: a sizeof
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *prt;
	prt = malloc(sizeof(listint_t));

	prt = h;

	if (prt->h != NULL)
	{
		return (prt->n);
	}
}
