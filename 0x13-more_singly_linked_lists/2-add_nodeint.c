#include "lists.h"
/**
 * add_nodeint - adds new node to beginning
 * @head: pointer to pointer
 * @n: variable
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	const int new_n = n;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);


	ptr->n = new_n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
