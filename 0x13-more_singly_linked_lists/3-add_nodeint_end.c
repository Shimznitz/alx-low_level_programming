#include "lists.h"
/**
 * add_nodeint_end - adds new node to beginning
 * @head: pointer to pointer
 * @n: variable
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	const int new_n = n;

	listint_t *end = malloc(sizeof(listint_t));
	end->n = new_n;
	end->next = NULL;
	listint_t *ptr = malloc(sizeof(listint_t));
	ptr = *head;

	if (end == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		*head = end;
		return (NULL);
	}
	else
	{
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = end;
	}

	return (*hiead);
}
