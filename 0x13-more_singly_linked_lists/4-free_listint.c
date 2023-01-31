#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to a head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_int *freed;
	freed = malloc(sizeof(listint_t));

	freed = head;

	free(freed);
}
